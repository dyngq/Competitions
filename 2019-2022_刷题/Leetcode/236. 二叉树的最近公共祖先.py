# Definition for a binary tree node.
import collections
class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None
class MyTree:
    def create_tree(self, data):
        if not data: return []
        root = TreeNode(data[0])
        queue = collections.deque([root])
        i = 1
        while queue and i < len(data):
            node = queue.popleft()
            if data[i] is not None:
                node.left = TreeNode(data[i])
                queue.append(node.left)
            i += 1
            if data[i] is not None:
                node.right = TreeNode(data[i])
                queue.append(node.right)
            i += 1
        return root

    def travel_tree(self, root):
        if not root: return []
        queue = collections.deque([root])
        res = []
        while queue:
            node = queue.popleft()
            if node == None: res.append(None)
            else:
                queue.append(node.left)
                queue.append(node.right)
                res.append(node.val)
        return res


class Solution:
    def lowestCommonAncestor(self, root: 'TreeNode', p: 'TreeNode', q: 'TreeNode') -> 'TreeNode':
        res = 0
        rode = []
        nodes = []
        rode_p = []
        rode_q = []
        # print(root.val, p.val, q.val)
        def dfs(node):
            if node == None: 
                return None
            # print(node.val, rode)
            if node == p:
                # print(rode)
                # print('1: ', node.val, rode)
                rode_p.extend(nodes)
                rode_p.append(node)
            if node == q:
                # print('2: ', node.val, rode)
                rode_q.extend(nodes)
                rode_q.append(node)
            # rode.append(node.val)
            nodes.append(node)
            dfs(node.left)
            dfs(node.right)
            # rode.pop(-1)
            nodes.pop(-1)
        def findsame(l1, l2):
            m, n = len(l1), len(l2)
            # res = None
            for i in range(min(m,n)):
                if l1[i] == l2[i]:
                    res = i
            return res
        dfs(root)
        # print(rode_p,rode_q)
        final_res = findsame(rode_p,rode_q)
        return rode_p[final_res]

test = [1,2,3,None,None,4,5]
test = [3,5,1,6,2,0,8,None,None,7,4]
c = MyTree()
tree_01 = c.create_tree(test)
print(c.travel_tree(tree_01))
s = Solution()
print(s.lowestCommonAncestor(tree_01, tree_01.left, tree_01.left.right.right).val)
print(s.lowestCommonAncestor(tree_01, tree_01.left, tree_01.right).val)