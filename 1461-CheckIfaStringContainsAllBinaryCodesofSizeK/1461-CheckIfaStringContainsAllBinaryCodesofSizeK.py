# Last updated: 2/23/2026, 10:58:27 AM
1class Solution:
2    def hasAllCodes(self, s: str, k: int) -> bool:
3        n = len(s)
4        codes = set()
5        for i in range(k, n + 1):
6            codes.add(s[i - k : i])
7        print(codes)
8        for i in range(1 << k):
9            if bin(i)[2:].rjust(k, '0') not in codes:
10                return False
11        
12        return True
13