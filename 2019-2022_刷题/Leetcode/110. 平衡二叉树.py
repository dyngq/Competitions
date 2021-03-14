# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
# class Solution:
#     def isBalanced(self, root: TreeNode) -> bool:
#         res = []
#         count = 0
#         def dfs(x):
#             nonlocal count
#             count += 1
#             # print(x.val)
#             if x.left is not None:
#                 dfs(x.left)
#                 count -= 1
#             if x.right is not None:
#                 dfs(x.right)
#                 count -= 1
#             if x.left == None or x.right == None:
#                 res.append(count)
#                 # print(res)
#                 # count -= 1
#         if root == None:
#             return True
#         if root.left is not None:
#             dfs(root.left)
#             count -= 1
#         else: res.append(0)
#         if root.right is not None:
#             dfs(root.right)
#             count -= 1
#         else: res.append(0)
#         if len(res) == 0:
#             return True
#         print(res)
#         print(max(res) - min(res))
#         if max(res) - min(res) <= 1: return True
#         else: return False

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right


# class Solution:
#     def isBalanced(self, root: TreeNode) -> bool:
#         def height(x):
#             if x == None: return 0
#             return max(height(x.left), height(x.right)) + 1
#         if root == None: return True
#         return abs(height(root.left) - height(root.right)) <= 1 and self.isBalanced(root.left) and self.isBalanced(root.right)

# 注意return max(leftheight, rightheight) + 1 ,关键就在于这个地方不重复计算了
class Solution:
    def isBalanced(self, root: TreeNode) -> bool:
        def height(x):
            if x == None: return 0
            leftheight = height(x.left)
            rightheight = height(x.right)
            if leftheight == -1 or rightheight == -1 or abs(leftheight - rightheight) > 1:
                return -1
            else:
                return max(leftheight, rightheight) + 1
        if root == None: return True
        return height(root)>=0

# 直接在递归高度的过程中判断每个节点是否平衡不就好了。时间和空间复杂度都是O(n)。
class Solution:
    def isBalanced(self, root: TreeNode) -> bool:
        def helper(node):
            nonlocal flag
            if not node:  return 0
            left_depth = helper(node.left)
            right_depth = helper(node.right)
            if abs(left_depth - right_depth) > 1:
                flag = False
            return max(left_depth, right_depth) + 1
        flag = True
        helper(root)
        return flag