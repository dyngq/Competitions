# import math
class Solution:
    def integerBreak(self, n: int) -> int:
        n += 1
        res = 0
        dp = [0] * n
        dp[0], dp[1] = 0, 0
        if n>=3:
            dp[2] = 1
        if n>=4:
            dp[3] = 2
        for i in range(4,n):
            for j in range(2, i+1):
                # print(i,j)
                # print(dp[i],dp[j],dp[i-j],i-j)
                print(j,dp[j])
                # dp[i] = max(dp[i],max(j,dp[j])*max(dp[i-j],i-j))
                #  因为dp[j]*dp[i-j]已经包含在j*dp[i-j]中，
                #  dp[j]的意思是将j拆成至少两个更小的正整数之和，
                #  这些正整数的最大乘积，如果i拆成了m个数之和，
                #  那一定能将这m个数分成1个数和其余的m-1个数，只需要遍历那1个数的所有可能取值即可，
                #  其余的m-1个数的最大乘积显然之前已经计算过了。如果考虑dp[j]*dp[i-j]，
                #  就是不必要地重复考虑了之前已经计算过的情况。
                dp[i] = max(dp[i],j*max(dp[i-j],i-j))
        # print(dp)
        # print(math.sqrt(n))
        # print(math.ceil(math.sqrt(n)))
        return dp[n-1]

# class Solution:
#     def integerBreak(self, n: int) -> int:
#         dp = [0] * (n + 1)
#         for i in range(2, n + 1):
#             for j in range(i):
#                 dp[i] = max(dp[i], j * (i - j), j * dp[i - j])
#         return dp[n]

# integerBreak
# cuttingRope
test = 10
s = Solution()
print(s.integerBreak(test))

# 4
# 1 1 1 1

# 1 2 1
# 1 1 2
# 2 1 1

# 3
# 2 1

# 4 
# 2 2/11
# 3 1

# 5
# 2 3
# 2 2 1
# 3 2
# 4 1
