# Last updated: 2/26/2026, 9:50:12 AM
1class Solution:
2    def numSteps(self, l: str) -> int:
3        res = 0
4        s = int(l, 2)
5        while s >= 2:
6            if s % 2 == 0:
7                s //= 2
8            else:
9                s += 1
10            res += 1
11        return res