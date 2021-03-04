# #
# # @lc app=leetcode.cn id=15 lang=python3
# #
# # [15] 三数之和
# #
# # from typing import List
# # @lc code=start
# # class Solution:
# #     def threeSum(self, nums: List[int]) -> List[List[int]]:
# #         result = []
# #         a = len(nums)
# #         if len(nums) < 3:
# #             return []
# #         nums.sort(reverse=False)
# #         for i in range(a):
# #             if nums[i] > 0:
# #                 break
# #             for j in range(i+1, a):
# #                 if nums[i] + nums[j] > 0:
# #                     break
# #                 for k in range(j+1, a):
# #                     if nums[i] + nums[j] + nums[k] == 0:
# #                         temp = [nums[i], nums[j] , nums[k]]
# #                         if (nums[i] != nums[i+1] or i+1==j) and (nums[j] != nums[j+1] or j+1==k) and (k == a-1 or nums[k] != nums[k+1]):
# #                             result.append(temp)
# #                         # if temp not in result:
# #                             # result.append(temp)
# #                     elif nums[i] + nums[j] + nums[k] > 0:
# #                         break
# #         # result = list(set(result))
# #         return result
# class Solution:
#     def threeSum(self, nums: List[int]) -> List[List[int]]:
#         result = []
#         length = len(nums)
#         if len(nums) < 3:
#             return []
#         nums.sort(reverse=False)
#         for i in range(length-2):
#             if nums[i] > 0:
#                 break
#             a = i + 1
#             b = length - 1
#             if nums[i] + nums[a] > 0:
#                 break

#             # 两处注释都是重
#             if i > 0 and nums[i] == nums[i-1]:
#                 continue

#             while a < b:
#                 temp =  [nums[i] + nums[a] + nums[b], [nums[i], nums[a], nums[b]]]
#                 if nums[i] + nums[a] > 0:
#                     break
#                 if temp[0] == 0:
#                     # if temp[1] not in result:
#                     # if (nums[a] != nums[a+1] and nums[b] != nums[b-1] ) or a+1==b:
#                         # result.append(temp[1])
#                     # a = a + 1
#                     # b = b - 1
#                     result.append(temp[1])
#                     while a < b and nums[a] == nums[a+1]:
#                         a = a + 1
#                     while b > a and nums[b] == nums[b-1]:
#                         b = b - 1
#                     a = a + 1
#                     b = b - 1
#                 elif temp[0] < 0:
#                     a = a + 1
#                 elif temp[0] > 0:
#                     b = b - 1
#         return result

class Solution:    
def threeSum(self, nums: List[int]) -> List[List[int]]:
    nums.sort()
    res = []

    for i, num in enumerate(nums[:-2]):
        if num > 0:
            break
        if num + nums[i+1] + nums[i+2] > 0:  # “最小”的三个值大于 0，退出循环。
            break
        if num + nums[-1] + nums[-2] < 0:  # 若取的值与最大的值之和还是小于 0，说明选取的值要再大一些，跳过本次循环。
            continue

        if i > 0 and num == nums[i-1]:
            continue

        left, right = i + 1, len(nums) - 1
        while left < right:
            tmp = num + nums[left] + nums[right]
            if tmp > 0:
                right -= 1
            elif tmp < 0:
                left += 1
            else:
                res.append([num, nums[left], nums[right]])
                while left < right and nums[right] == nums[right - 1]:
                    right -= 1
                while left < right and nums[left] == nums[left+1]:
                    left += 1
                left, right = left + 1, right - 1
    return res
# # @lc code=end

