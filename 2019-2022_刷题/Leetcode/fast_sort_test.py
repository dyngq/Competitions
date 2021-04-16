from typing import List
# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class Solution:
    def reverseList(self, head: ListNode) -> ListNode:
        if head is None or head.next is None: return head
        # if head.next.next is None:
        #     head.next.next = head
        #     head = head.next
        #     head.next.next = None
        #     return head
        p = head
        pp = head
        head = head.next
        q = head.next
        while head:
            # print(head.val)
            q = head.next
            if q is not None:
                head.next = p
                p = head
                head = q
            else:
                head.next = p
                break
                # head = head.next
        pp.next = None
        return head

    def fast_sort(self, arr: List[int]) -> List[int]:
        def fast(arr, l, r):
            if l > r:
                return
            i, j = l, r
            while i < j:
                while i < j and arr[j] >= arr[l]: j -= 1
                while i < j and arr[i] <= arr[l]: i += 1
                arr[i], arr[j] = arr[j], arr[i]
            arr[l], arr[i] = arr[i], arr[l]
            # print(arr)
            fast(arr, l, i-1)
            fast(arr, i+1 ,r)
        fast(arr, 0, len(arr)-1)
        return arr

test = [3,5,4,1,2,6]
s = Solution()
print(s.fast_sort(test))

def create_list(li: List[int]) -> ListNode:
    pass
