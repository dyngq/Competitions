# class Solution:
#     def longestPalindrome(self, s: str) -> str:
#         n = len(s)
#         res_dict = {1:s[0]}
#         max_num = 1
#         for i in range(n):
#             x, y = i, n-1
#             flag = 0
#             while x <= y:
#                 print(x, y, s[x], s[y])
#                 if s[x] == s[y]:
#                     flag += 1
#                     x += 1
#                     y -= 1
#                 elif flag > 0:
#                     x -= flag
#                     y += flag-1
#                     flag = 0
#                     # y -= 1
#                 else:
#                     flag = 0
#                     y -= 1
#                 print(x,y,flag)
#             # if flag >= 1:
#             if x-1 == y+1:
#                 if flag > 1:
#                     temp = s[i:i+flag*2-1]
#                     res_dict[len(temp)] = temp
#                     if len(temp) > max_num: max_num = len(temp)
#                     # break
#             else:
#                 temp = s[i:i+flag*2]
#                 res_dict[len(temp)] = temp
#                 if len(temp) > max_num: max_num = len(temp)
#                 # break
#         # sorted(res_dict)
#         # sorted(res_dict, key = lambda x: (x[1],x[0]))
#         # return res_dict[max_num]
#         return res_dict


class Solution:
    def longestPalindrome(self, s: str) -> str:
        n = len(s)
        dp = [[False]*n for _ in range(n)]
        ans = ""
        for l in range(n):
            for i in range(n):
                j = i + l
                print(i,j)
                if j >= n: break
                if l == 0:
                    dp[i][j] = True
                elif l == 1:
                    dp[i][j] = (s[i]==s[j])
                else:
                    dp[i][j] = (dp[i+1][j-1] and s[i]==s[j])
                if dp[i][j] and l+1 > len(ans): ans = s[i:j+1]
        # print(dp)
        return ans

test = "baaaaaaabad"
test = "cbbd"
test = "aacabdkacaa"
test = "bacabab"
test = "xaabacxcabaaxcabaax"
# test = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabcaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"
s = Solution()
print(s.longestPalindrome(test))