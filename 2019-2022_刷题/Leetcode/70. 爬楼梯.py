class Solution:
    def climbStairs(self, n: int) -> int:
        if n == 1:
            return 1
        dp = [1] * n
        dp[0] = 1
        dp[1] = 2
        # dp[3] =
        for i in range(2,n): 
            dp[i] = dp[i-2] + dp[i-1]
        # print(dp)
        return dp[n-1]

test = 4
s = Solution()
print(s.climbStairs(test))

# 可以利用滚动数组将时间复杂度降低到O(1)，即只需要一个有三个数的数组