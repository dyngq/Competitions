class Solution:
    def mySqrt(self, x: int) -> int:
        # def bifind():
        #     pass
        # return bifind(x)
        a = 0 if x >= 1 else 1 
        b = x
        if a == 0:
            while True:
                n = (a+b)/2
                # print(a,b,n*n,x)
                if abs(n*n - x) < 0.001:
                    break
                if n*n < x:
                    a = n
                else:
                    b = n
        elif a == 1:
            while True:
                n = (a+b)/2
                # print(a,b,n*n,x)
                if abs(n*n - x) < 0.001:
                    break
                if n*n < x:
                    b = n
                else:
                    a = n

        return n

# class Solution:
#     def mySqrt(self, x: int) -> int:
#         l, r, ans = 0, x, -1
#         while l <= r:
#             mid = (l + r) // 2
#             if mid * mid <= x:
#                 ans = mid
#                 l = mid + 1
#             else:
#                 r = mid - 1
#         return ans


s = Solution()
print(s.mySqrt(19))
print(s.mySqrt(0.8))