# Last updated: 4/24/2026, 4:52:11 PM
1class Solution:
2    def convert(self, s: str, numRows: int) -> str:
3        if numRows == 1 or len(s) <= numRows: return s
4        rows = [""] * numRows
5        idx = 0
6        count = 0
7        down = False
8        for ch in s:
9            rows[idx] += ch
10            if idx == 0 or idx == numRows - 1:
11                down = not down
12            idx += 1 if down else -1
13            count += 1
14        return ''.join(rows)
15