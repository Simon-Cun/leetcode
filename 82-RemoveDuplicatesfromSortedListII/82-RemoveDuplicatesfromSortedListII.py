# Last updated: 2/1/2026, 7:25:59 PM
1# Definition for singly-linked list.
2# class ListNode:
3#     def __init__(self, val=0, next=None):
4#         self.val = val
5#         self.next = next
6class Solution:
7    def deleteDuplicates(self, head: Optional[ListNode]) -> Optional[ListNode]:
8        sentinel = prev = ListNode(-1, head)
9        curr = head
10
11        while curr:
12            if curr and curr.next and curr.val == curr.next.val:
13                while curr and curr.next and curr.val == curr.next.val:
14                    curr = curr.next
15                curr = curr.next
16                prev.next = curr
17                continue
18            prev = curr
19            curr = curr.next
20
21        return sentinel.next