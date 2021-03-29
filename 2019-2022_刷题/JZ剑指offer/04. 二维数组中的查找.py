from typing import List
class Solution:
    # def findNumberIn2DArray(self, matrix: List[List[int]], target: int) -> bool:
    #     def dfs(x, y):
    #         nonlocal res
    #         # if res == True: return
    #         if x >= m or y >= n: return
    #         if target - matrix[x][y] < 0: return
    #         if target == matrix[x][y]:
    #             print(x,y,matrix[x][y])
    #             res = True
    #             return
    #         matrix[x][y] = float('inf')
    #         if res == False: 
    #             try:
    #                 gap1 = target - matrix[x+1][y]
    #                 gap2 = target - matrix[x][y+1]
    #                 if gap1 > gap2:
    #                     dfs(x+1, y)
    #                     dfs(x, y+1)
    #                 else:
    #                     dfs(x, y+1)
    #                     dfs(x+1, y+1)
    #             except:
    #                 return
    #     # print(len(matrix))
    #     res = False
    #     try:
    #         m = len(matrix)
    #         n = len(matrix[0])
    #         if matrix[0][0] == target:
    #             return True
    #     except:
    #         return False
    #     try:
    #         gap1 = target - matrix[0][1]
    #     gap2 = target - matrix[1][0]
    #     if gap1 > gap2:
    #         dfs(0, 1)
    #         dfs(1, 0)
    #     else:
    #         dfs(1, 0)
    #         dfs(0, 1)
    #     return res
    def findNumberIn2DArray(self, matrix: List[List[int]], target: int) -> bool:
        # res = False
        i = len(matrix) - 1
        if i == -1: return False
        j = 0
        try:
            n = len(matrix[0])
        except:
            return False
        while i >= 0 and j < n:
            print(i, j)
            if matrix[i][j] == target:
                return True
            elif matrix[i][j] > target:
                i -= 1
            else:
                j += 1
        return False

matrix = [
  [1,   4,  7, 11, 15],
  [2,   5,  8, 12, 19],
  [3,   6,  9, 16, 22],
  [10, 13, 14, 17, 24],
  [18, 21, 23, 26, 30]
]
matrix = [[-5]]
target = -5
s = Solution()
print(s.findNumberIn2DArray(matrix, target))
