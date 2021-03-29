from typing import List
class Solution:
    def longestCommonSubsequence(self, text1: str, text2: str) -> int:
        x = len(text1)+1
        y = len(text2)+1
        # if x==1 or y == 1:
            # return 0
        dp = [[0]*y for i in range(x)]
        # print(dp)
        for i in range(1, x):
            for j in range(1, y):
                # print('1', dp, text1[i-1], text2[j-1])
                if text1[i-1] == text2[j-1]:
                    c = 1
                    dp[i][j] = dp[i-1][j-1] + 1
                else:
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1])
                # print('2', dp)
        return dp[x-1][y-1]
        


# "bsbininm"
# "jmjkbkjkv"
s = Solution()
# text1 = "abcde"
# text2 = "ace" 
text1 = "bsbininm"
text2 = "jmjkbkjkv" 
print(s.longestCommonSubsequence(text1, text2))

# import itertools as it
# print(list(it.permutations(['c','d','a'],3)))
# print(list(it.product(range(2), repeat=5)))

#
        # print('1', dp, text1[i-1], text2[j-1])
        # if i>0:
        #     if j == 0:
        #         dp[i][j] = dp[i-1][j] + c
        #     else:
        #         dp[i][j] = max(dp[i-1][j], dp[i][j-1]) + c
        # else:
        #     dp[i][j] = 0 + c
        # print(i,j,dp[i][j])
        # print('2', dp)
# 
# dp[0][0] = 1
# print(dp[1][1])
# print(dp)



#     a c e
#     0 0 0    
# a 0 1 1 1
# b 0 1 1 1 
# c 0 1 2 2
# d 0 1 2 2
# e 0 1 2 3




#     j m j k b k j k v
#   0 0 0 0 0 0 0 0 0 0
# b 0 0 0 0 0 1 1 1 1 1
# s 0 0 0 0 0 1 1 1 1 1
# b 0 0 0 0 0 1
# i
# n
# i
# n
# m
