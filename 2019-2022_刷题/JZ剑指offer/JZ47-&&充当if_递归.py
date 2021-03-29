class Solution:
    def Sum_Solution(self, n):
        if n == 1:
            return 1
        return n+self.Sum_Solution(n-1)
        # 没有找到python的实现，贴一个JAVA吧
        # bool x = n > 1 && (n += Sum_Solution(n-1));
        # return n;
def main():
    so = Solution()
    print(so.Sum_Solution(5))
    pass

if __name__ == '__main__':
    main()

# 本题不允许使用循环或者分支或者选择等结构
# 没找到python的and逻辑表达式实现，暂时用了if
# 核心还是递归比较简单