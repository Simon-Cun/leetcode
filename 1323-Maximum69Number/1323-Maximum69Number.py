# Last updated: 2/23/2026, 4:06:21 PM
1class Solution:
2    def maximum69Number(self, num: int) -> int:
3        res = []
4        changed = False
5
6        for d in str(num):
7            if d == '6' and not changed:
8                res.append('9')
9                changed = True
10            else:
11                res.append(d)
12
13        return int(''.join(res))