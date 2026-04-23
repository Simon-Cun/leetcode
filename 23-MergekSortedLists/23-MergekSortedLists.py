# Last updated: 4/23/2026, 3:42:26 PM
1# Definition for singly-linked list.
2# class ListNode:
3#     def __init__(self, val=0, next=None):
4#         self.val = val
5#         self.next = next
6class Solution:
7    def mergeKLists(self, lists: List[Optional[ListNode]]) -> Optional[ListNode]:
8        pq = []
9        count = 0
10        for i in lists:
11            if i:
12                heapq.heappush(pq, (i.val, count, i))
13                count += 1
14        if not pq: return None
15        head = heapq.heappop(pq)[2]
16        if head.next: heapq.heappush(pq, (head.next.val, count, head.next))
17        count += 1
18        tail = head
19        while pq:
20            tail.next = heapq.heappop(pq)[2]
21            tail = tail.next
22            if tail.next: heapq.heappush(pq, (tail.next.val, count, tail.next))
23            count += 1
24        tail.next = None
25        return head