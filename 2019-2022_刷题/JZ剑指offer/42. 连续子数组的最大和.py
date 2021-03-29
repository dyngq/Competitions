from typing import List
class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        res = nums[0]
        n = len(nums)
        dp = [0]*n
        # print(dp[-1][-1])
        for i in range(n):
            dp[i] = max(dp[i-1],0) + nums[i]
        print(dp)
        return max(dp)

nums = [-2,1,-3,4,-1,2,1,-5,4]
# nums = [1,-1,1]
s = Solution()
print(s.maxSubArray(nums))
