from typing import List
class Solution:
    def findContentChildren(self, g: List[int], s: List[int]) -> int:
        g.sort()
        s.sort()
        count = 0
        i = 0
        j = 0
        while i < len(g):
            if j >= len(s):
                break 
            if g[i] <= s[j]:
                count += 1
                i = i + 1
            j += 1
        return count

# test1 = [1,2,3]
# test2 = [1,1]
# test1 = [1,2]
# test2 = [1,2,3]
test1 = [10,9,8,7]
test2 = []
s = Solution()
print(s.findContentChildren(test1, test2))