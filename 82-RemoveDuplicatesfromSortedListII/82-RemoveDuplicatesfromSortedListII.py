# Last updated: 2/1/2026, 7:24:28 PM
1# Definition for singly-linked list.
2# class ListNode:
3#     def __init__(self, val=0, next=None):
4#         self.val = val
5#         self.next = next
6class Solution:
7    def deleteDuplicates(self, head: Optional[ListNode]) -> Optional[ListNode]:
8        sentinel = ListNode(-1, head)
9        prev = sentinel
10        curr = head
11
12        while curr:
13            if curr and curr.next and curr.val == curr.next.val:
14                while curr and curr.next and curr.val == curr.next.val:
15                    curr = curr.next
16                curr = curr.next
17                prev.next = curr
18                continue
19            prev = curr
20            curr = curr.next
21
22        return sentinel.next