#
# @lc app=leetcode.cn id=1 lang=python3
#
# [1] 两数之和
#
from typing import List
# @lc code=start
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        # nums.sort(reverse=False)
        a, b = len(nums), len(nums)
        for i in range(a):
            for j in range(i+1,b):
                if nums[i]+nums[j] == target:
                    result = [i,j]
                # elif nums[i]+nums[j] > target:
                #     break
        # result = [a,b]
        return result
# @lc code=end

