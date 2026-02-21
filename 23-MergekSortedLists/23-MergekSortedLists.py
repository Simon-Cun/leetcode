# Last updated: 2/20/2026, 4:36:47 PM
1# Definition for singly-linked list.
2# class ListNode:
3#     def __init__(self, val=0, next=None):
4#         self.val = val
5#         self.next = next
6class Solution:
7    def mergeKLists(self, lists: List[Optional[ListNode]]) -> Optional[ListNode]:
8        res = []
9        for i in lists:
10            curr = i
11            while curr:
12                res.append(curr.val)
13                curr = curr.next
14        res.sort(reverse=True)
15        head = None
16        for i in res:
17            to_push = ListNode(i)
18            to_push.next = head
19            head = to_push
20        return head