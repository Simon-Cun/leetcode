# Last updated: 2/1/2026, 12:10:38 AM
1# Definition for singly-linked list.
2# class ListNode:
3#     def __init__(self, x):
4#         self.val = x
5#         self.next = None
6
7class Solution:
8    def hasCycle(self, head: Optional[ListNode]) -> bool:
9        slow = head
10        fast = head
11
12        while slow and fast and fast.next:
13            fast = fast.next
14            if slow == fast:
15                return True
16            slow = slow.next
17            fast = fast.next
18        
19        return False