# Last updated: 2/1/2026, 10:34:09 AM
1import math
2class Solution:
3    def totalMoney(self, n: int) -> int:
4        res = 0
5        day = 1
6        week = 1
7        to_add = 1
8        for _ in range(n):
9            print(week, to_add)
10            res += to_add
11            if day % 7 == 0:
12                day = 1
13                week += 1
14                to_add = week
15            else:
16                day += 1
17                to_add += 1
18        return res