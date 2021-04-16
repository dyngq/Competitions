class Solution:
    def convert(self, s: str, numRows: int) -> str:
        matrix = [[] for _ in range(numRows)]
        # print(matrix)
        flag = 0
        i = 0
        for c in s: 
            if flag == 0:
                matrix[i].append(c)
                if i+1 < numRows:
                    i += 1
                else:
                    i -= 1
                    flag = 1
            elif flag == 1:
                matrix[i].append(c)
                if i-1 >= 0:
                    i -= 1
                else:
                    flag = 0
                    i += 1
        # print(matrix)
        res = ""
        for _ in matrix:
            res += ''.join(_)
        return res
            

test = "PAYPALISHIRING"
num = 4
s = Solution()
print(s.convert(test, num))