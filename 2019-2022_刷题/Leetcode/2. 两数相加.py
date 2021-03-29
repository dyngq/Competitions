# Definition for singly-linked list.
class ListNode:
    def __init__(self, x):
        if isinstance(x, int):
            self.val = x
            self.next = None
        elif isinstance(x, list):
            self.val = x[0]
            self.next = None
            t = self
            for i in x[1:]:
                t.next = ListNode(i)
                t = t.next

    
    def gatherAttrs(self):
        return ", ".join("{}: {}".format(k, getattr(self, k)) for k in self.__dict__.keys())

    def __str__(self):
        return self.__class__.__name__+" {"+"{}".format(self.gatherAttrs())+"}"


class Solution:
    def addTwoNumbers(self, l1: ListNode, l2: ListNode) -> ListNode:
        o = ListNode(0)
        memory = o
        carry = 0
        while l1!=None and l2!=None :
            # print(l1.val+l2.val)
            tt = l1.val + l2.val + carry
            carry = int(tt/10)
            o.next = ListNode(tt%10)
            o = o.next
            l1 = l1.next
            l2 = l2.next
        while l1!=None:
            # print(l2.val)
            tt = l1.val + carry
            carry = int(tt/10)
            o.next = ListNode(tt%10)
            o = o.next
            l1 = l1.next
            if carry == 0:
                o.next = l1
                break
        while l2!=None:
            # print(l1.val)
            tt = l2.val + carry
            carry = int(tt/10)
            o.next = ListNode(tt%10)
            o = o.next
            l2 = l2.next
            if carry == 0:
                o.next = l2
                break
        if carry != 0:
            o.next = ListNode(carry)
            o = o.next
        return memory.next

def main():
    print( ListNode([1,2,3]) )
    dy = Solution()
    print(dy.addTwoNumbers(ListNode([9]),ListNode([9])))
    print(dy.addTwoNumbers(ListNode([2,4,3]),ListNode([5,6,4,8])))


if __name__ == '__main__':
    main()

# class Solution:
#     def addTwoNumbers(self, l1: ListNode, l2: ListNode) -> ListNode:
#         if isinstance(l1,list):
#             l1 = ListNode(l1)
#             l2 = ListNode(l2)
#         re = ListNode(0)
#         r=re
#         carry=0
#         while(l1 or l2):
#             x= l1.val if l1 else 0
#             y= l2.val if l2 else 0
#             s=carry+x+y
#             carry=s//10
#             r.next=ListNode(s%10)
#             r=r.next
#             if(l1!=None):l1=l1.next
#             if(l2!=None):l2=l2.next
#         if(carry>0):
#             r.next=ListNode(1)
#         return re.next
        

