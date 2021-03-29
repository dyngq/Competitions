from typing import List

# class Solution:
#     def numSubarrayProductLessThanK(self, nums: List[int], k: int) -> int:
#         n = len(nums)
#         temp = 1
#         count = 0
#         for i in range(n):
#             for j in range(i,n):
#                 temp = temp * nums[j]
#                 if temp < k:
#                     # print(temp)
#                     count += 1
#                 if temp >= k:
#                     break
#             temp = 1
#         return count

class Solution(object):
    def numSubarrayProductLessThanK(self, nums, k):
        if k <= 1: return 0
        prod = 1
        ans = 0
        left = 0
        for right, num in enumerate(nums):
            prod *= num
            while prod>=k:
                prod /= nums[left]
                left += 1
            ans += right - left + 1
        return ans

nums = [10,5,2,6]
k = 100
s = Solution()
print(s.numSubarrayProductLessThanK(nums, k))