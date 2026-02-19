# Last updated: 2/19/2026, 10:29:50 AM
1class Solution:
2    def countBinarySubstrings(self, s: str) -> int:
3        prev, count, i = 0, 0, 0
4        n = len(s)
5        res = 0
6        while i < n:
7            if s[i] == s[i - 1] or i == 0:
8                count += 1
9            else:
10                res += min(prev, count)
11                prev = count
12                count = 1
13            i += 1
14        res += min(prev, count)
15        return res
16