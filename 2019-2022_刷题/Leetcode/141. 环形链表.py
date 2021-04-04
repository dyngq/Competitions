# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def hasCycle(self, head: ListNode) -> bool:
        try:
            f = head.next.next
            l = head.next
            while f:
                if f == l:
                    return True
                f = f.next.next
                l = l.next
        except:
            return False
        return False

# detectCycle

class Solution:
    def detectCycle(self, head: ListNode) -> ListNode:
        pass
        f = l = head
        while f:
            if f.next is None:
                return None
            f = f.next.next
            l = l.next
            if f == l:
                f = head
                while f:
                    if f == l:
                        return f
                    f = f.next
                    l = l.next
        return None