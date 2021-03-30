class Solution:
    def cuttingRope(self, n: int) -> int:
        dp = [0] * (n+1)
        dp[2] = 1
        for i in range(2,n+1):
            for j in range(2,i):
                # print(i,j,i-j)
                dp[i] = max(dp[i], j*max(i-j, dp[i-j]))
        # return int(dp[-1]%(1e9+7))
        # print(int(dp[-1]%(1e9+7)))
        # print(dp[-1]%int(1e9+7))
        # print(dp[-1]%1000000007)
        return dp[-1]%1000000007


test = 120
s = Solution()
print(s.cuttingRope(test))