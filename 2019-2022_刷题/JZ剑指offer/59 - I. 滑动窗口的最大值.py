from typing import List
class Solution:
    def maxSlidingWindow(self, nums: List[int], k: int) -> List[int]:
        n = len(nums)
        if n == 0:
            return []
        if k >= n:
            k = n
        for i in range(n-k+1):
            print(i)
        return []

nums = [1,3,-1,-3,5,3,6,7]
k = 3
# nums = [1,-1]
# k = 1
s = Solution()
print(s.maxSlidingWindow(nums, k))