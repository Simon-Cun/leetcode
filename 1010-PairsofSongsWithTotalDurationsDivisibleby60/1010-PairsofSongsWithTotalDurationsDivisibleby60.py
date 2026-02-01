# Last updated: 2/1/2026, 12:04:23 AM
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
12        if head and head.next:
13            head = head.next
14            
15        while curr and curr.next:
16            second = curr.next
17            third = curr.next.next
18            second.next = curr
19            curr.next = third
20            prev.next = second
21            prev = curr
22            curr = curr.next
23        
24        return head