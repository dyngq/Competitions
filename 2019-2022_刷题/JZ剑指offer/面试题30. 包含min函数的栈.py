import collections
class MinStack:
    def __init__(self):
        """
        initialize your data structure here.
        """
        self.queue = collections.deque()
        self.minque = collections.deque()

    def push(self, x: int) -> None:
        self.queue.append(x)
        if not self.minque or x <= self.minque[-1]:
            self.minque.append(x)

    def pop(self) -> None:
        t = self.queue.pop()
        if self.minque and t == self.minque[-1]:
            self.minque.pop()
        # return t

    def top(self) -> int:
        return self.queue[-1]

    def getMin(self) -> int:
        
        return self.minque[-1]



# Your MinStack object will be instantiated and called as such:
a = ["MinStack","push","push","push","getMin","pop","top","getMin"]
b = [[],[-2],[0],[-3],[],[],[],[]]

a = ["MinStack","push","push","push","getMin","pop","getMin"]
b = [[],[0],[1],[0],[],[],[]]

a = a[1:]
b = b[1:]
minStack = MinStack()

for i, j in zip(a, b):
    # print(a, b)
    # f = 'minStack.'+i
    # print(f)
    # f(b)
    f = getattr(minStack, i)
    if j:
        print(f(j))
    else:
        print(f())
