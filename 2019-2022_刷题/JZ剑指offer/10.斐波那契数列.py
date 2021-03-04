class Solution:
    # def fib(self, n: int) -> int:
    #     def f(n):
    #         if n == 1:
    #             return 1
    #         if n == 0:
    #             return 0
    #         return (f(n-1) + f(n-2)) #%(1e9+7)
    #     res = f(n)
    #     return res
    def fib(self, n: int) -> int:
        a, b = 0, 1
        res = []
        def f(n,a,b):
            if n == 0:
                res.append(a)
                return
            # print('1',a,b)
            a, b = a + b, a
            # print('2',a,b)
            f(n-1,a,b) # 这个地方可以直接用循环，不用递归，这儿的递归也只是起到了控制循环的作用
        f(n,a,b)
        return res[0]%(1000000007)
    # def fib(self, n: int) -> int:
    #     if n<0:
    #         return -1
    #     elif n==0:
    #         return 0;
    #     elif n==1:
    #         return 1;
    #     else:
    #         dp = []
    #         dp.append(0)
    #         dp.append(1)
    #         for i in range(2,n+1):
    #             dp_tmp = (dp[i-1] + dp[i-2])%1000000007
    #             dp.append(dp_tmp)
    #         return dp[n]
test = 81
S = Solution()
print(S.fib(test))