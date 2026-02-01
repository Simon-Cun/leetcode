# Last updated: 2/1/2026, 12:22:17 AM
1# Definition for singly-linked list.
2# class ListNode:
3#     def __init__(self, val=0, next=None):
4#         self.val = val
5#         self.next = next
6class Solution:
7    def isPalindrome(self, head: Optional[ListNode]) -> bool:
8        curr = head
9        length = 0
10        while curr:
11            length += 1
12            curr = curr.next
13        odd = False
14        if length % 2 != 0:
15            odd = True
16        length //= 2
17        stack = []
18        curr = head
19        while curr:
20            if length > 0:
21                length -= 1
22                stack.append(curr.val)
23            elif odd:
24                odd = False
25                curr = curr.next
26                continue
27            elif stack and stack.pop() != curr.val:
28                return False
29            curr = curr.next
30        return True
31
32