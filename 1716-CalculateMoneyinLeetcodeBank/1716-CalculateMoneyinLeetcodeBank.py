# Last updated: 2/1/2026, 12:09:18 PM
1import math
2class Solution:
3    def totalMoney(self, n: int) -> int:
4        res = 0
5        day = 1
6        week = 1
7        to_add = 1
8        for _ in range(n):
9            res += to_add
10            if day % 7 == 0:
11                day = 1
12                week += 1
13                to_add = week
14            else:
15                day += 1
16                to_add += 1
17        return res