from typing import List
class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        n = len(nums)
        if n == 0: return None
        dp = [0] * n
        res = nums[0]
        for i, v in enumerate(nums):
            dp[i] = v + max(dp[i-1], 0)
            if dp[i] > res:
                res = dp[i]
        return res

def main():
    inp = list(map(int, input().split()))
    s = Solution()
    print(s.maxSubArray(inp))

if __name__ == "__main__":
    main()