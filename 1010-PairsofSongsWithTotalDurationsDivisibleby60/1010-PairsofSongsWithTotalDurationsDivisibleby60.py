# Last updated: 2/1/2026, 12:04:58 AM
1# Definition for singly-linked list.
2# class ListNode:
3#     def __init__(self, val=0, next=None):
4#         self.val = val
5#         self.next = next
6class Solution:
7    def swapPairs(self, head: Optional[ListNode]) -> Optional[ListNode]:
8        sentinel = ListNode(-1, head)
9        prev = sentinel
10        curr = head
11
12        while curr and curr.next:
13            second = curr.next
14            third = curr.next.next
15            second.next = curr
16            curr.next = third
17            prev.next = second
18            prev = curr
19            curr = curr.next
20        
21        return sentinel.next