n, m = list(map(int, input().split()))
# print(n, m)
# dp = [[-float('inf')] * m for _ in range(n)]
# dp = [[1] * m for _ in range(n)]
# print(dp)
ma = []
for i in range(n):
    row = list(map(int, input().split()))
    ma.append(row)
    # for j, k in enumerate(row):
    #     # print(k)
    #     pass
# print(ma)

res = []
def dfs(x, y, num):
    print(x, y)
    if x < 0 or y < 0:
        return num
    # print(ma)
    if x >= n or y >= m:
        return num

    num = num * int(ma[x][y])

    if x == n-1 and y == m-1:
        res.append(num)
        return num

    # if x >= 0 and x+1 < n and y < m:
    re = dfs(x+1, y, num)
    # x -= 1
    # num = num/re
    # if y >=0 and y+1 < m and x < n:
    dfs(x, y+1, num)
        # y -= 1
    # return dfs(x+1, y, num), dfs(x, y+1, num)


dfs(0, 0, 1)

print(res)

# res = max(res)

# if res < 0:
#     print(-1)
# else: 
#     print(res)
