"""
# Definition for a Node.
class Node:
    def __init__(self, val, prev, next, child):
        self.val = val
        self.prev = prev
        self.next = next
        self.child = child
"""

class Solution:
    def flatten(self, head: 'Node') -> 'Node':
        if head == None: return None
        # xhead = Node(0,None,head,None)
        stack = []
        x = head
        # print(x.val, x.prev, x.next, x.child)
        while x:
            # print(stack)
            if x.child:
                stack.append(x.next)
                x.next = x.child
                x.child.prev = x
                x.child = None
                x = x.next
            elif x.next:
                x = x.next
            elif stack:
                x.next = stack.pop()
                if x.next:
                    x.next.prev = x
                    x = x.next
            else:
                break
        # print(x.val, x.prev, x.next, x.child)
        # t = xhead.next
        # while t:
        #     print(t.val, t.prev, t.next, t.child)
        #     t = t.next
        return head