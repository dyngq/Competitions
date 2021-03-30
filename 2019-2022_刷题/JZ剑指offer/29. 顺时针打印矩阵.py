from typing import List
class Solution:
    # def spiralOrder(self, matrix: List[List[int]]) -> List[int]:
    #     m = len(matrix)
    #     if m == 0: return []
    #     n = len(matrix[0])
    #     if n == 0: return []
    #     res = []
    #     def dfs(x, y):
    #         # print(x,y)
    #         if x >= m or y >= n or matrix[x][y] is None: return
    #         # print(matrix[x][y])
    #         res.append(matrix[x][y])
    #         matrix[x][y] = None
    #         dfs(x,y+1)
    #         dfs(x+1,y)
    #         dfs(x,y-1)
    #         dfs(x-1,y)
    #     dfs(0, 0)

    def spiralOrder(self, matrix: List[List[int]]) -> List[int]:
        m = len(matrix)
        if m == 0: return []
        n = len(matrix[0])
        if n == 0: return []
        res = []
        flag = 0
        i = j = 0
        con = 0
        while 1:
            # print(i, j, flag)
            if len(res) >= m*n:
                break
            if i >= m or i < 0 or j < 0 or j >= n or matrix[i][j] is None:
                flag += 1
                con = 0
                # continue
            else:
                res.append(matrix[i][j])
                matrix[i][j] = None
                con = 1
            # judge = flag % 4
            if flag % 4 == 0:
                if con == 0:
                    i += 1
                j += 1
            elif flag % 4 == 1:
                if con == 0:
                    j -= 1
                i += 1
            elif flag % 4 == 2:
                if con == 0:
                    i -= 1
                j -= 1
            elif flag % 4 == 3:
                if con == 0:
                    j += 1
                i -= 1
                # flag = 0
            # print(res)

            
        return res


matrix = [[1,2,3],[4,5,6],[7,8,9]]
matrix = [[1,2,3,4],[5,6,7,8],[9,10,11,12]]
# matrix = [[1,2,3,4],[5,6,7,8],[9,10,11,12],[13,14,15,16]]
# if matrix[100][100]:
#     print('ok')
s = Solution()
print(s.spiralOrder(matrix))