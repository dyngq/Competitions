from typing import List

class Solution1:
    def findKthLargest(self, nums: List[int], k: int) -> int:
        pass
    def fast_find(self, nums: List[int], k: int) -> List[int]:
        def quick_sort(arr, l, r):
            if l > r: return
            i, j = l, r
            while i < j:
                while i < j and arr[j] >= arr[l]: j -= 1
                while i < j and arr[i] <= arr[l]: i += 1
                arr[i], arr[j] = arr[j], arr[i]
            arr[i], arr[l] = arr[l], arr[i]
            quick_sort(arr,l,i-1)
            quick_sort(arr,i+1,r)
        quick_sort(nums, 0, len(nums)-1)
        return nums
    
    def fast_topk(self, nums: List[int], k: int) -> List[int]:
        def quick_sort(arr, l, r):
            # if l > r: return
            i, j = l, r
            while i < j:
                while i < j and arr[j] >= arr[l]: j -= 1
                while i < j and arr[i] <= arr[l]: i += 1
                arr[i], arr[j] = arr[j], arr[i]
            arr[i], arr[l] = arr[l], arr[i]
            if i == k: return
            elif i > k:
                quick_sort(arr,l,i-1)
            else:    
                quick_sort(arr,i+1,r)
        quick_sort(nums, 0, len(nums)-1)
        return nums

class Solution:
    def findKthLargest(self, nums: List[int], k: int) -> int:
        # k = len(nums) - k
        k -= 1
        # if len(nums) == 1: return nums[0]
        def quick_sort(arr, l, r):
            # if l > r: return
            i, j = l, r
            while i < j:
                while i < j and arr[j] <= arr[l]: j -= 1
                while i < j and arr[i] >= arr[l]: i += 1
                arr[i], arr[j] = arr[j], arr[i]
            # print(i,j,l)
            arr[i], arr[l] = arr[l], arr[i]
            if i == k: return
            elif i > k:
                quick_sort(arr,l,i-1)
            else:
                quick_sort(arr,i+1,r)
        quick_sort(nums, 0, len(nums)-1)
        res = float("inf")
        for i in nums[:k+1]:
            if i < res: res = i
        # return nums, res
        return res

test = [1,3,2,4]
test = [5,4,3,2,1,0]
# s1 = Solution1()
# print(s1.fast_find(test, 5))
# print(s1.fast_topk(test, 5))

test = [3,2,1,5,6,4]
test = [2, 1]
s = Solution()
print(s.findKthLargest(test,2))
