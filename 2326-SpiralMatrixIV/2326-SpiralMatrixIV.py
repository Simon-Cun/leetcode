# Last updated: 2/1/2026, 12:25:10 PM
1# Definition for singly-linked list.
2# class ListNode:
3#     def __init__(self, val=0, next=None):
4#         self.val = val
5#         self.next = next
6class Solution:
7    def spiralMatrix(self, m: int, n: int, head: Optional[ListNode]) -> List[List[int]]:
8        matrix = [[-1] * n for _ in range(m)]
9        curr = head
10        l, r, t, b = 0, n - 1, 0, m - 1
11        while l <= r and t <= b:
12            for i in range(l, r + 1):
13                if not curr:
14                    break
15                matrix[t][i] = curr.val
16                curr = curr.next
17            t += 1
18
19            for i in range(t, b + 1):
20                if not curr:
21                    break
22                matrix[i][r] = curr.val
23                curr = curr.next
24            r -= 1
25
26            if t <= b:
27                for i in range(r, l - 1, -1):
28                    if not curr:
29                        break
30                    matrix[b][i] = curr.val
31                    curr = curr.next
32                b -= 1
33            if l <= r:
34                for i in range(b, t - 1, -1):
35                    if not curr:
36                        break
37                    matrix[i][l] = curr.val
38                    curr = curr.next
39                l += 1
40        return matrix