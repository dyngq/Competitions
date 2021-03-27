from typing import List
class Solution:
    def coinChange1(self, coins: List[int], amount: int) -> int:
        if amount == 0: return 0
        n = len(coins)
        list.sort(coins)
        dp = [-1]*(amount+1)
        res = [0]*(amount+1)
        dp[0] = 0
        # print(dp)
        # for s in range(1,amount+1):
            # for i in range(n-1,-1,-1):
        # 调换顺序，时间降低到一半
        for i in range(n-1,-1,-1):
            for s in range(1,amount+1):
                # print(s,i)
                c = coins[i]
                if s >= c:
                    # print(s,c,dp[s], dp[s-c],res[s])
                    if dp[s-c] != -1:
                        dp[s] = c + dp[s-c]
                        if res[s] > 0:
                            res[s] = min(res[s], 1 + res[s-c])
                        else: 
                            res[s] = 1 + res[s-c]
                        # break
                    else:
                        continue
        # return dp,res
        if res[amount] == 0: return -1
        else: return res[amount]
    def coinChange(self, coins: List[int], amount: int) -> int:
        if amount == 0: return 0
        n = len(coins)
        list.sort(coins)
        dp = [float('inf')]*(amount+1)
        dp[0] = 0
        for c in coins:
            for i in range(c, amount+1): 
                print(c,i)
                dp[i] = min(dp[i],1+dp[i-c])
        return dp
        # if res[amount] == 0: return -1
        # else: return res[amount]

coins = [3, 5]
amount = 15
# coins = [186,419,83,408]
# amount = 6249
s = Solution()
print(s.coinChange(coins, amount))

# \3 5
# 1 \ -1
# 2 \ -1
# 3 \ 3
# 4 \ -1
# 5 \ 5
# 6 \ 5 1 x \ 3 3
# 7 \ 5 2 x \ 3 4 x
# 8 \ 5 3
# 9 \ 5 4 x \ 3 6
# 10 \ 5 5
# 11 \ 5 6(33)
# 12 \ 5 7 x \ 3 9
# 13 \ 5 8
# 14 \ 5 9
# 15 \ 5 10

# class Solution:
#     def coinChange(self, coins: List[int], amount: int) -> int:
#         if amount == 0: return 0
#         n = len(coins)
#         list.sort(coins)
#         # print(coins,amount)
#         dp = [-1]*(amount+1)
#         res = [[0]*(amount+1)]*n
#         dp[0] = 0
#         # print(res)
#         for s in range(1,amount+1):
#             for i in range(n-1,-1,-1):
#                 c = coins[i]
#                 # print(s,c)
#                 if s >= c:
#                     print(s,c,i)
#                     # print(s,c,dp[s], dp[s-c],res[s-c])
#                     if dp[s-c] != -1:
#                         dp[s] = c + dp[s-c]
#                         # res[s][i] = 1 + min(res[s-c])
#                         # break
#                     else:
#                         continue
#         return res
#         # print(len(res),res)
#         # if res[amount] == 0: return -1
#         # else: return res[amount]