from typing import List
class Solution:
    # def lengthOfLIS(self, nums: List[int]) -> int:
    #     res = 0
    #     n = len(nums)
    #     dp = [1]*n
    #     temp = 1
    #     for i in range(n):
    #         for j in range(i+1):
    #             if j>0 and nums[i] > nums[j-1]:
    #                 print(i,j-1,nums[i], nums[j-1])
    #                 dp[i] = max(dp[i],dp[j-1]+1)
    #                 # print('temp', temp)
    #             # else:
    #                 # dp[i] = dp[i-1]
    #         # dp[i] = temp
    #         # print('dp: ', dp)
    #         # temp = 1
    #     # return dp
    #     return max(dp)
    def lengthOfLIS(self, nums: [int]) -> int:
        tails, res = [0] * len(nums), 0
        for num in nums:
            i, j = 0, res
            while i < j:
                m = (i + j) // 2
                if tails[m] < num: i = m + 1 # 如果要求非严格递增，将此行 '<' 改为 '<=' 即可。
                else: j = m
            tails[i] = num
            if j == res: res += 1
            print(tails)
        return res


test = [10,9,2,5,3,7,101,18]
test = [4,10,4,3,8,9]
test = [0,1,0,3,2,3]
test = [1,3,6,7,9,4,10,5,6]
test = [3,2,1]
test = [2,5,3,1,7,2,0,8]
s = Solution()
print(s.lengthOfLIS(test))

# 2 5 3 1 7

# 2 3