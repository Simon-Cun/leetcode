# Last updated: 2/1/2026, 12:35:00 AM
1# Definition for singly-linked list.
2# class ListNode:
3#     def __init__(self, val=0, next=None):
4#         self.val = val
5#         self.next = next
6class Solution:
7    def isPalindrome(self, head: Optional[ListNode]) -> bool:
8        slow = head
9        fast = head
10        while fast and fast.next:
11            slow = slow.next
12            fast = fast.next.next
13        
14        curr = slow
15        half = None
16        while curr:
17            temp = curr.next
18            curr.next = half
19            half = curr
20            curr = temp
21        
22        curr = head
23        while curr and half:
24            if curr.val != half.val:
25                return False
26            curr = curr.next
27            half = half.next
28        return True
29