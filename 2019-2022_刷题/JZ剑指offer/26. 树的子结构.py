# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

from collections import deque
class Solution:
    
    def isSubStructure(self, A: TreeNode, B: TreeNode) -> bool:
        def compare(t, b):
            comp = deque([[t,b]])
            while comp:
                [ca, cb] = comp.popleft()

                if cb is not None:
                    if ca is None:
                        return False
                    # print(ca.val, cb.val)
                    if ca.val != cb.val:
                        # print('F')
                        return False
                    comp.extend([[ca.left,cb.left],[ca.right,cb.right]])
            return True
        if A is None or B is None: return False
        nodes = deque([A])
        # res = []
        while nodes:
            t = nodes.popleft()
            if t is None:
                # res.append(None)
                continue
            else:
                # res.append(t.val)
                nodes.extend([t.left, t.right])
            if t.val == B.val:
                print(t.val)
                if compare(t, B) == True:
                    return True
                # break
        # del nodes
        # ca = deque([t])

        return False
