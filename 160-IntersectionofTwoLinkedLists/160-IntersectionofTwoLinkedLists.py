# Last updated: 2/1/2026, 4:23:49 PM
1# Definition for singly-linked list.
2# class ListNode:
3#     def __init__(self, x):
4#         self.val = x
5#         self.next = None
6
7class Solution:
8    def getIntersectionNode(self, headA: ListNode, headB: ListNode) -> Optional[ListNode]:
9        s = set()
10
11        curr = headA
12        while curr:
13            s.add(curr)
14            curr = curr.next
15
16        curr = headB
17        while curr:
18            if curr in s:
19                return curr
20            curr = curr.next
21            
22        return None