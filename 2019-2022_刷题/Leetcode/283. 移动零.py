from typing import List

class Solution:
    # def moveZeroes(self, nums: List[int]) -> None:
    #     """
    #     Do not return anything, modify nums in-place instead.
    #     """
    #     n = len(nums)
    #     x = y = n-1
    #     while x>-1:
    #         if nums[x] == 0:
    #             for i in range(x,y):
    #                 nums[i] = nums[i+1]
    #             nums[y] = 0
    #             y -= 1
    #         x -= 1
    #     return nums
    def moveZeroes(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        n = len(nums)
        x = 0
        y = 0
        while y<n:
            while y < n:
                if nums[y] != 0: break 
                else: y += 1
            if y < n:
                nums[x] = nums[y]
            else:
                nums[x] = 0
            x += 1
            y += 1
        if n > 1:
            for i in range(x,n):
                nums[i] = 0
        return nums

test = [0,1,0,3,12]
# test = [1]
# test = [0,0]
test = [1,0]
test = [2,1]
s = Solution()
print(s.moveZeroes(test))

# 1 2 0 3 4 0 5