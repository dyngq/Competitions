# #
# # @lc app=leetcode.cn id=2 lang=python3
# #
# # [2] 两数相加
# #
# # @lc code=start
# # Definition for singly-linked list.
# class ListNode():
#     def __init__(self, val):
#         if isinstance(val,int):
#             self.val = val
#             self.next = None
            
#         elif isinstance(val,list):
#             self.val = val[0]
#             self.next = None
#             cur = self
#             for i in val[1:]:
#                 cur.next = ListNode(i)
#                 cur = cur.next
    
#     def gatherAttrs(self):
#         return ", ".join("{}: {}".format(k, getattr(self, k)) for k in self.__dict__.keys())

#     def __str__(self):
#             return self.__class__.__name__+" {"+"{}".format(self.gatherAttrs())+"}"


# class Solution:
#     def addTwoNumbers(self, l1: ListNode, l2: ListNode) -> ListNode:
#         if isinstance(l1,list):
#             l1 = ListNode(l1)
#             l2 = ListNode(l2)
#         re = ListNode(0)
#         r=re
#         carry=0
#         while(l1 or l2):
#             x= l1.val if l1 else 0
#             y= l2.val if l2 else 0
#             s=carry+x+y
#             carry=s//10
#             r.next=ListNode(s%10)
#             r=r.next
#             if(l1!=None):l1=l1.next
#             if(l2!=None):l2=l2.next
#         if(carry>0):
#             r.next=ListNode(1)
#         return re.next
          
        
        
# # @lc code=end
# if __name__ == "__main__":
#     test = Solution()
#     print(test.addTwoNumbers([1,3],[2,1,3]))







# # import torch
# # import numpy as np
# # from torch.distributions import Categorical, kl

# # # Cross entropy
# # p = [0.1, 0.2, 0.3, 0.4]
# # q = [0.1, 0.1, 0.7, 0.1]

# # Hpq = -sum([p[i] * np.log(q[i]) for i in range(len(p))])
# # print (f"H(p, q) = {Hpq}")

# # i = 0
# # j = 0
# # switch = {
# #     0:lambda i:i+1,
# #     1:lambda j:j+1,
# #     2:lambda x:x**x,
# #     3:lambda x:x**x
# # }
# # switch[0](i, j)
# # print(i, j)

# # while 1:
# #     try:
# #         a,b = (input().split())
# #         print(int(a)+int(b))
# #     except:
# #         break

for i in range(5):
    for j in range(5):
        print(i, j)
        if i == 2 and j == 1:
            break
    else:
        continue
    break