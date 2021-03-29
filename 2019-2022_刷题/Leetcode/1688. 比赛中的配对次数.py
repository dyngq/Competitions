class Solution:
    def numberOfMatches(self, n: int) -> int:
        temp = 0
        print('n1:', n)
        if n == 1:
            return 0
        if n % 2 == 0:
            temp = int(n/2)
            n = n/2
        else:
            temp = int(n/2)
            n = int(n/2) + 1
        print('n2:', n)
        print('temp', temp)
        return temp+self.numberOfMatches(n)

test = 7
s = Solution()
print(s.numberOfMatches(test))