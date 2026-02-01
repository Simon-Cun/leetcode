# Last updated: 2/1/2026, 10:11:30 AM
1# Definition for singly-linked list.
2# class ListNode:
3#     def __init__(self, val=0, next=None):
4#         self.val = val
5#         self.next = next
6class Solution:
7    def removeElements(self, head: Optional[ListNode], val: int) -> Optional[ListNode]:
8        sentinel = ListNode(-1, head)
9        prev = sentinel
10        curr = head
11        while curr:
12            if curr.val == val:
13                prev.next = curr.next
14                curr = prev.next
15            else:
16                prev = curr
17                curr = curr.next
18        return sentinel.next