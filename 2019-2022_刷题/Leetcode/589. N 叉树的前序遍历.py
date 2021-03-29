"""
# Definition for a Node.
class Node:
    def __init__(self, val=None, children=None):
        self.val = val
        self.children = children
"""

# class Solution:
#     def preorder(self, root: 'Node') -> List[int]:
#         res = []
#         def dfs(x: 'Node'):
#             res.append(x.val)
#             for i in x.children:
#                 dfs(i)
#         if not root:  return []
#         dfs(root)
#         return res

from collections import deque
class Solution:
    def preorder(self, root: 'Node') -> List[int]:
        res = []
        queue = deque([root])
        while queue:
            x = queue.popleft()
            res.append(x.val)
            queue.extend(x.children)
        return res

class Solution:
    def preorder(self, root: 'Node') -> List[int]:
        res = []
        stack = [root]
        while stack:
            x = stack.pop()
            res.append(x.val)
            stack.extend(x.children[::-1])
        return res