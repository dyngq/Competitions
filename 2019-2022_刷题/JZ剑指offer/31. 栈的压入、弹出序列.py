from typing import List
from collections import deque
class Solution:
    def validateStackSequences(self, pushed: List[int], popped: List[int]) -> bool:
        stack = deque()
        res = 0
        m, n = len(pushed), len(popped)
        for i in range(m):
            stack.append(pushed[i])
            while stack and popped[res] == stack[-1]:
                stack.pop()
                res += 1
        if res == m:
            return True
        else:
            return False

pushed = [1,2,3,4,5]
popped = [4,5,3,2,1]
popped = [4,3,5,1,2]
s = Solution()
print(s.validateStackSequences(pushed, popped))