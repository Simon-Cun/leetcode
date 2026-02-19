# Last updated: 2/19/2026, 10:31:17 AM
1class Solution:
2    def countBinarySubstrings(self, s: str) -> int:
3        i, prev, count, n, res = 0, 0, 0, len(s), 0
4        while i < n:
5            if i == 0 or s[i] == s[i - 1]:
6                count += 1
7            else:
8                res += min(prev, count)
9                prev = count
10                count = 1
11            i += 1
12        res += min(prev, count)
13        return res
14