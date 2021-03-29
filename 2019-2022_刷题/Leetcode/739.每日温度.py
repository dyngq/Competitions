from typing import List
# class Solution:
#     def dailyTemperatures(self, T: List[int]) -> List[int]:
#         n = len(T)
#         res = [0]*n
#         for i in range(n):
#             for j in range(i,n):
#                 if T[j] > T[i]:
#                     # print(T[j], T[i])
#                     res[i] = j-i
#                     break
#         return res

# class Solution:
#     def dailyTemperatures(self, T: List[int]) -> List[int]:
#         n = len(T)
#         res = [0]*n
#         stack = []
#         for i in range(n):
#             temp = T[i]
#             while stack and temp > T[stack[-1]]:
#                 p = stack.pop()
#                 res[p] = i - p
#             stack.append(i)
#         return res

class Solution:
    def dailyTemperatures(self, T: List[int]) -> List[int]:
        n=len(T)
        ans=[0]*n
        for i in range(n-2,-1,-1):
            now=i+1
            while T[now]<=T[i]:
                print('1',now,i)
                if ans[now]:
                    now+=ans[now]
                    print('2',now, ans[now])
                else:
                    break
            # else:
            ans[i]=now-i
        return ans

test = [73, 74, 75, 71, 69, 72, 76, 73]
s = Solution()
print(s.dailyTemperatures(test))