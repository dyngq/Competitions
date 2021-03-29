# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def levelOrder(self, root: TreeNode) -> List[List[int]]:
        if root == None:
            return []
        res = []
        val = [root.val]
        res =[[val]][0]
        queue = collections.deque()
        qutemp = collections.deque()
        queue.append(root)
        # res += [root.val]
        # res = [res]
        temp_res = []
        while queue:
            # print('queue1: ', queue)
            temp = queue.popleft()
            # print('queue2: ', queue)
            # print(temp.val)
            if temp.left!=None:
                # print('queue3: ', queue)
                qutemp.append(temp.left)
                temp_res.append(temp.left.val)
                # print('queue4: ', queue)
            if temp.right!=None:
                qutemp.append(temp.right)
                temp_res.append(temp.right.val)
            # print('queue3: ', queue)
            # print('qutemp: ', qutemp)
            if len(queue)==0:
                print('level')
                queue += qutemp
                qutemp = []
                if temp_res != []:
                    res += [temp_res]
                temp_res = []
            # print('while')
        return res

class Solution:
    def levelOrder(self, root: TreeNode) -> List[List[int]]:
        if not root: return []
        res, queue = [], collections.deque()
        queue.append(root)
        while queue:
            tmp = []
            for _ in range(len(queue)):
                node = queue.popleft()
                tmp.append(node.val)
                if node.left: queue.append(node.left)
                if node.right: queue.append(node.right)
            res.append(tmp)
        return res