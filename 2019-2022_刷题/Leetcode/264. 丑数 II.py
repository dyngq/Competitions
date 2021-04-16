# class Solution:
#     def nthUglyNumber(self, n: int) -> int:
#         temp_list_1 = set([1])
#         temp_list_2 = set()
#         core = [2, 3, 5]
#         res = [0] * (n+1)
        
#         while True:
#             for ni,i in enumerate(core):
#                 count = 0
#                 for nj,j in enumerate(temp_list_1.copy()):
#                     t = i * j
#                     print(i,j,t)
#                     # print(i,j,ni,nj)
#                     if t <= n:
#                         res[t] = 1
#                         temp_list_2.add(t)
#                     else:
#                         count += 1
#                         # if ni == 0 and count == len(temp_list_1)-1:
#                         #     return res
#                         break
#             temp_list_1 = temp_list_2
#             print(temp_list_1, temp_list_2)
#             temp_list_2 = set()
#             # print(res)

# s = Solution()
# print(s.nthUglyNumber(10))
#         # dp = [0] * (n+1)
#         # if n == 0: return []
#         # if n == 1: return [1]
#         # if n == 2: return [1,2]
#         # if n == 3 or n == 4: return [1,2,3]
#         # dp[1] = 1
#         # dp[2] = 1
#         # dp[3] = 1
#         # dp[5] = 1
#         # res = [1, 2, 3, 5] 
#         # for i in range(5, n):
#         #     if 

import heapq

class Solution:
    def nthUglyNumber(self, n: int) -> int:
        core = [2,3,5]
        seen = {1}
        heap = [1]
        for i in range(n-1):
            curr = heapq.heappop(heap)
            for k in core:
                r = curr * k
                # if (r := curr * k) not in seen:
                if r not in seen:
                    seen.add(r)
                    heapq.heappush(heap, r)
        return heapq.heappop(heap)


s = Solution()
print(s.nthUglyNumber(10))