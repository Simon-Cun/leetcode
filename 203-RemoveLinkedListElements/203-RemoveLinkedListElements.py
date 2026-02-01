# Last updated: 2/1/2026, 10:16:03 AM
1# Definition for singly-linked list.
2# class ListNode:
3#     def __init__(self, val=0, next=None):
4#         self.val = val
5#         self.next = next
6class Solution:
7    def getDecimalValue(self, head: Optional[ListNode]) -> int:
8        res = ""
9        while head:
10            res += str(head.val)
11            head = head.next
12        return int(res, 2)