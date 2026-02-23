# Last updated: 2/23/2026, 10:59:32 AM
1class Solution:
2    def hasAllCodes(self, s: str, k: int) -> bool:
3        n = len(s)
4        
5        codes = set()
6        for i in range(k, n + 1):
7            codes.add(s[i - k : i])
8
9        for i in range(1 << k):
10            if bin(i)[2:].rjust(k, '0') not in codes:
11                return False
12        
13        return True
14