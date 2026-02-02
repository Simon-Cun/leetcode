# Last updated: 2/1/2026, 4:22:30 PM
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
11        curr1 = headA
12        curr2 = headB
13
14        while curr1 or curr2:
15            if curr1:
16                s.add(curr1)
17                curr1 = curr1.next
18            if curr2 in s:
19                return curr2
20            if curr2:
21                s.add(curr2)
22                curr2 = curr2.next
23            if curr1 in s:
24                return curr1
25            
26        return None