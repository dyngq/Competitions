from typing import List
import collections
class Solution:
    def maxSlidingWindow(self, nums: List[int], k: int) -> List[int]:
        n = len(nums)
        res = []
        if not nums or k == 0: return []
        queue = collections.deque()
        for i in range(k):
            while queue and nums[i] > queue[-1]: 
                queue.pop()
            queue.append(nums[i])
        res.append(queue[0])
        for i in range(k, n):
            if queue[0] == nums[i-k]: queue.popleft()
            while queue and nums[i] > queue[-1]:
                queue.pop()
            queue.append(nums[i])
            res.append(queue[0])
        return res

nums = [1,3,-1,-3,5,3,6,7]
k = 3
nums = [1,-1]
k = 1
s = Solution()
print(s.maxSlidingWindow(nums, k))