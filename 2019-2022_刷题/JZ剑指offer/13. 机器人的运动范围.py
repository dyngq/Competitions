class Solution:
    def movingCount(self, m: int, n: int, k: int) -> int:
        res = 0
        def judge(x, y):
            print(int(x/10) + x%10 + int(y/10) + y%10)
            if int(x/10) + x%10 + int(y/10) + y%10 > k: return False
            else: return True
        def dfs(x, y):
            # print('in: ',x, y)
            nonlocal res
            # print(judge(x-1, y-1))
            # if x <= 0 or y <= 0: return
            # print(matrix)
            if matrix[x][y] == 0: return
            
            matrix[x][y] = 0
            # print(matrix)
            print('ou: ',x, y)
            if judge(x-1, y-1) == False:
                dfs(x-1, y)
                # x += 1
                dfs(x, y-1)
                # y -= 1
            else:
                res += 1
                # print(res)
                dfs(x+1, y)
                # x -= 1
                dfs(x-1, y)
                # x += 1
                dfs(x, y+1)
                # y -= 1
                dfs(x, y-1)
                # y += 1
                # print(matrix)
        
        matrix = ([[0]*(m+2)]) + ([[0]+[1]*m+[0] for i in range(n)]) +([[0]*(m+2)]) 
        # print(matrix)
        x = y = 1
        dfs(x+1, y)
        # x -= 1
        dfs(x-1, y)
        # x += 1
        dfs(x, y+1)
        # y -= 1
        dfs(x, y-1)
        # y += 1
        return res

m, n, k = 2, 3, 1
# m, n, k = 3, 2, 17
s = Solution()
print(s.movingCount(m, n, k))