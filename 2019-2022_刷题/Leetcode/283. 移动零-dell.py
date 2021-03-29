from typing import List
class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        n = len(nums)
        x = 0
        y = 0
        while y<n:
            print(nums)
            while y < n:
                print(y)
                print(nums[y])
                if nums[y] != 0: break 
                else: y += 1
            # print(x, y)
            # print(nums[x], nums[y])
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
# test = [2,1]
# test = [0,1,0]


s = Solution()
print(s.moveZeroes(test))