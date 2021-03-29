# -*- coding:utf-8 -*-
class Solution:
    # s 源字符串
    def replaceSpace(self, s):
        # write code here
# 方法一 最简单的str函数replace
        s = s.replace(' ','%20')

# 方法二 str list 互相转换做题
#         slist = list(s)
#         for ss,i in zip(s,range(len(s))):
#             if ss == ' ':
#                 slist[i] = '%20'
#         s = ''.join(slist)

# 方法三 比方法二简单，看的题解
        # return "%20".join(list(s.split(" ")))
        return s


# Python list 和 str 互转

# * list转str	list = [1, 2, 3, 4, 5]
#   * ''.join(list) 结果即为：12345
#   * ','.join(list) 结果即为：1,2,3,4,5
# * str转list
#   * list(str)
#   * str.split() str.split('.')