# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:

    def swap(self, n1, n2):
        if not n2:
            return
        temp = n2.next
        n1.next = temp
        n2.next = n1

    def swapPairs(self, head: ListNode) -> ListNode:
        if (not head) or (not head.next):
            return head
        node = head
        head = node.next
        while node:
            n1, n2 = node, node.next
            self.swap(n1, n2)
            node = n1.next
            if n1.next and n1.next.next:
                n1.next = n1.next.next

        return head