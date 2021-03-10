from typing import List

# class UnionFind:
#     def __init__(self):
#         self.father = {}
#         self.count = 0
#     def add(self,x):
#         if x not in self.father:
#             self.father[x] = None
#             self.count += 1
#     def find(self,x):
#         root = x
#         while self.father[root] != None:
#             root = self.father[root]
#         # 路径压缩
#         while x != root:
#             original_father = self.father[x]
#             self.father[x] = root
#             x = original_father
#         return root
#     def is_connected(self,x,y):
#         return self.find(x) == self.find(y)
#     def merge(self,x,y):
#         root_x, root_y = self.find(x), self.find(y)
#         if root_x != root_y:
#             self.father[root_x] = root_y
#             self.count -= 1

# class Solution:
#     def findCircleNum(self, isConnected: List[List[int]]) -> int:
#         uf = UnionFind()
#         for i in range(len(isConnected)):
#             uf.add(i)
#             for j in range(i):
#                 if isConnected[i][j] == 1:
#                     uf.merge(i,j)
#         return uf.count        


# class Solution:
#     def findCircleNum(self, isConnected: List[List[int]]) -> int:
#         def dfs(i):
#             visited[i] = 1
#             for j in range(n):
#                 if isConnected[i][j] and not visited[j]:
#                     dfs(j)
#         n = len(isConnected)
#         visited = [0]*n
#         count = 0
#         for i in range(n):
#             if not visited[i]:
#                 count += 1
#                 dfs(i)
#         return count    

import collections    

class Solution:
    def findCircleNum(self, isConnected: List[List[int]]) -> int:
        n = len(isConnected)
        visited = [0] * n
        count = 0
        queue = collections.deque()
        for i in range(n):
            if not visited[i]:
                visited[i] = 1
                count += 1
                queue.append(i)
                while queue:
                    u = queue.popleft()
                    for v in range(n):
                        if isConnected[u][v] and not visited[v]:
                            visited[v] = 1
                            queue.append(v)
        return count


test = [[1,1,0],[1,1,0],[0,0,1]]
s = Solution()
print(s.findCircleNum(test))