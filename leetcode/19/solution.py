# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

from collections import deque


class Solution:
    def removeNthFromEnd(self, head: ListNode, n: int) -> ListNode:
        i = 0
        node = head
        l = []
        len_l = 0
        while node:
            l.append(node)
            len_l += 1
            node = node.next

        if len_l == n:
            if len_l == 1:
                return None
            return l[1]
        if n == 1:
            l[-2].next = None
            return head

        l[-n - 1].next = l[-n + 1]
        return head