# Definition for a binary tree node.
import collections

class TreeNode(object):
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None

class Codec:

    def serialize_bfs(self, root):
        """Encodes a tree to a single string.
        
        :type root: TreeNode
        :rtype: str
        """
        if root == None: return []
        queue = collections.deque([root])
        res = []
        while queue:
            node = queue.popleft()
            if node == None:
                res.append(None)
            else:
                res.append(node.val)
                queue.extend([node.left, node.right])
        return res



    def deserialize_bfs(self, dataList):
        """Decodes your encoded data to tree.
        
        :type data: str
        :rtype: TreeNode
        """
        if not dataList:  return []
        # dataList = data
        root = TreeNode(dataList[0])
        queue = collections.deque([root])
        i = 1
        while queue and i < len(dataList):
            node = queue.popleft()
            # print(i)
            if dataList[i] is not None:
                node.left = TreeNode(dataList[i])
                queue.append(node.left)
            i += 1
            if dataList[i] is not None:
                node.right = TreeNode(dataList[i])
                queue.append(node.right)
            i += 1
        return root

    def serialize_dfs(self, root):
        res = []
        def dfs(node):
            # nonlocal res
            if node == None: 
                res.append(None)
                return
            else:
                res.append(node.val)
                dfs(node.left)
                dfs(node.right)
        dfs(root)
        return res
        


    def deserialize_dfs(self, data):
        def dfs(dataList):
            if len(dataList) == 0: return
            val = dataList.pop(0)
            if val is None: return None
            root = TreeNode(val)
            root.left = dfs(dataList)
            root.right = dfs(dataList)
            return root
        return dfs(data)
        
test = [1,2,3,None,None,4,5]
s = Codec()
tree_01 = s.deserialize_bfs(test)
print(s.serialize_bfs(tree_01))
tree_02 = s.deserialize_dfs(test)
print(s.serialize_dfs(tree_02))

# Your Codec object will be instantiated and called as such:
# ser = Codec()
# deser = Codec()
# ans = deser.deserialize(ser.serialize(root))