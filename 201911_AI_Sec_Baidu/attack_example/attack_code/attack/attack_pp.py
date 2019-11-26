#coding=utf-8

from __future__ import absolute_import
from __future__ import division
from __future__ import print_function

import os
import time
import sys
import math
import numpy as np
import argparse
import functools

import paddle
import paddle.fluid as fluid
from utils import *
import six


#实现linf约束 输入格式都是tensor 返回也是tensor [1,3,224,224]
def linf_img_tenosr(o,adv,epsilon=16.0/256):
    
    o_img=tensor2img(o)
    adv_img=tensor2img(adv)
    
    clip_max=np.clip(o_img*(1.0+epsilon),0,255)
    clip_min=np.clip(o_img*(1.0-epsilon),0,255)
    
    adv_img=np.clip(adv_img,clip_min,clip_max)
    
    adv_img=img2tensor(adv_img)
    
    return adv_img
"""
Explaining and Harnessing Adversarial Examples, I. Goodfellow et al., ICLR 2015
实现了FGSM 支持定向和非定向攻击的单步FGSM


input_layer:输入层
output_layer:输出层
step_size:攻击步长
adv_program：生成对抗样本的prog 
eval_program:预测用的prog
isTarget：是否定向攻击
target_label：定向攻击标签
epsilon:约束linf大小
o:原始数据
use_gpu：是否使用GPU

返回：
生成的对抗样本
"""
def FGSM(adv_program,eval_program,gradients,o,input_layer,output_layer,step_size=16.0/256,epsilon=16.0/256,isTarget=False,target_label=0,use_gpu=False):
    
    place = fluid.CUDAPlace(0) if use_gpu else fluid.CPUPlace()
    exe = fluid.Executor(place)
   
    result = exe.run(eval_program,
                     fetch_list=[output_layer],
                     feed={ input_layer.name:o })
    result = result[0][0]
   
    o_label = np.argsort(result)[::-1][:1][0]
    
    if not isTarget:
        #无定向攻击 target_label的值自动设置为原标签的值
        print("Non-Targeted attack target_label=o_label={}".format(o_label))
        target_label=o_label
    else:
        print("Targeted attack target_label={} o_label={}".format(target_label,o_label))
        
        
    target_label=np.array([target_label]).astype('int64')
    target_label=np.expand_dims(target_label, axis=0)
    
    #计算梯度
    g = exe.run(adv_program,
                     fetch_list=[gradients],
                     feed={ input_layer.name:o,'label': target_label  }
               )
    g = g[0][0]
    
    #print(g)
    
    if isTarget:
        adv=o-np.sign(g)*step_size
    else:
        adv=o+np.sign(g)*step_size
    
    #实施linf约束
    adv=linf_img_tenosr(o,adv,epsilon)
    
    return adv


"""
Towards deep learning models resistant to adversarial attacks, A. Madry, A. Makelov, L. Schmidt, D. Tsipras, 
and A. Vladu, ICLR 2018
实现了PGD 支持定向和非定向攻击的PGD


input_layer:输入层
output_layer:输出层
step_size:攻击步长
adv_program：生成对抗样本的prog 
eval_program:预测用的prog
isTarget：是否定向攻击
target_label：定向攻击标签
epsilon:约束linf大小
o:原始数据
use_gpu：是否使用GPU

返回：
生成的对抗样本
"""
def PGD(adv_program,eval_program,gradients,o,input_layer,output_layer,step_size=2.0/256,epsilon=16.0/256,iteration=20,isTarget=False,target_label=0,use_gpu=True):
    
    place = fluid.CUDAPlace(0) if use_gpu else fluid.CPUPlace()
    exe = fluid.Executor(place)
   
    result = exe.run(eval_program,
                     fetch_list=[output_layer],
                     feed={ input_layer.name:o })
    result = result[0][0]
   
    o_label = np.argsort(result)[::-1][:1][0]
    
    if not isTarget:
        #无定向攻击 target_label的值自动设置为原标签的值
        print("Non-Targeted attack target_label=o_label={}".format(o_label))
        target_label=o_label
    else:
        print("Targeted attack target_label={} o_label={}".format(target_label,o_label))
        
        
    target_label=np.array([target_label]).astype('int64')
    target_label=np.expand_dims(target_label, axis=0)
    
    adv=o.copy()
    
    for _ in range(iteration):
    
        #计算梯度
        g = exe.run(adv_program,
                         fetch_list=[gradients],
                         feed={ input_layer.name:adv,'label': target_label  }
                   )
        g = g[0][0]

        if isTarget:
            adv=adv-np.sign(g)*step_size
        else:
            adv=adv+np.sign(g)*step_size
    
    #实施linf约束
    adv=linf_img_tenosr(o,adv,epsilon)
    
    return adv