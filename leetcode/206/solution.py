# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def __init__(self):
        self.answer = None

    def reverse(self, n1, n2):
        if not n2:
            return

        if n2.next:
            self.reverse(n2, n2.next)
        else:
            self.answer = n2
        n2.next = n1

    def reverseList(self, head: ListNode) -> ListNode:
        if not head or not head.next:
            return head
        self.reverse(head, head.next)
        head.next = None
        return self.answer