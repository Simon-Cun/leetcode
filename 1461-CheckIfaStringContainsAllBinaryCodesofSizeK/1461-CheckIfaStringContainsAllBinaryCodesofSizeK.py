# Last updated: 2/23/2026, 11:00:22 AM
1class Solution:
2    def hasAllCodes(self, s: str, k: int) -> bool:
3        n = len(s)
4
5        codes = set()
6        for i in range(k, n + 1):
7            codes.add(s[i - k : i])
8
9        return len(codes) == 2**k
10