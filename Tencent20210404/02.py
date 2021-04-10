n, m = list(map(int, input().split()))
# print(n, m)
dp = [[-float('inf')] * m for _ in range(n)]
# dp = [[1] * m for _ in range(n)]
print(dp)
for i in range(n):
    row = list(map(int, input().split()))
    for j, k in enumerate(row):
        # print(dp[i][j])
        # print(k)    
        if i == 0 and j == 0:    
            dp[i][j] = k
        elif i == 0: 
            # pass
            dp[i][j] = k * dp[i][j-1]
        elif j == 0:
            # pass
            dp[i][j] = k * dp[i-1][j]
        else:
            dp[i][j] = k * max(dp[i-1][j], dp[i][j-1])
        

# print(dp)
if dp[n-1][m-1] < 0:
    print(-1)
else: 
    print(dp[n-1][m-1])


print(format(0.0015,'.2e'))
print(pow(27, 1/3))

times = int(input())
for _ in range(times):
    l, r, k = list(map(int, (input().split())))
    # print(l, r, k)
    res = 0
    for i in range(l, r+1):
        res += pow((i+pow(10, -k)), 1/3) - pow(i, 1/3)
    # res = res 

    print(res)

# import math
# f"{math.pi * 10**11:.4e}"

# f"{math.pi * 10**11:.2e}"
# '3.14e+11'

# def eformat(f, prec, exp_digits):
#     s = "%.*e"%(prec, f)
#     mantissa, exp = s.split('e')
#     # add 1 to digits as 1 is taken by sign +/-
#     return "%se%+0*d"%(mantissa, exp_digits+1, int(exp))

# print(eformat(0.0000870927939438012, 5, 3))
# print eformat(1.0000870927939438012e5, 14, 3)
# print eformat(1.1e123, 4, 4)
# print eformat(1.1e-123, 4, 4)