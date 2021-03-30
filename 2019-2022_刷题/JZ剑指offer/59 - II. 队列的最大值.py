from collections import deque
class MaxQueue:

    def __init__(self):
        self.deque = deque()
        self.stack = deque()
        return None

    def max_value(self) -> int:
        # print(self.stack)
        if self.stack:
            return self.stack[0]
        else:
            return -1

    def push_back(self, value: int) -> None:
        self.deque.append(value)
        while self.stack and value > self.stack[-1]:
            self.stack.pop()
        # if self.stack is None or value < self.stack[-1]:
        self.stack.append(value)
        return None

    def pop_front(self) -> int:
        if not self.queue: return -1
        t = self.deque.popleft()
        if self.stack[0] == t:
            self.stack.popleft()
        return t


# Your MaxQueue object will be instantiated and called as such:
obj = MaxQueue()
param_1 = obj.max_value()
print('1 ',param_1)
print(obj.push_back(3))
param_2 = obj.max_value()
print('2 ',param_2)
print(obj.push_back(1))

print(obj.push_back(2))
param_3 = obj.pop_front()
print('3 ',param_3)

param_4 = obj.max_value()
print('4 ',param_4)