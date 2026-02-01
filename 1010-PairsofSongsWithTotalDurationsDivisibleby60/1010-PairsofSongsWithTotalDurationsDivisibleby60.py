# Last updated: 2/1/2026, 12:04:09 AM
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
11        if head and head.next:
12            head = head.next
13        while curr and curr.next:
14            second = curr.next
15            third = curr.next.next
16            second.next = curr
17            curr.next = third
18            prev.next = second
19            prev = curr
20            curr = curr.next
21        
22        return head