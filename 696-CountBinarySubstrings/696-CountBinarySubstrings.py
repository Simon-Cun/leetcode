# Last updated: 2/19/2026, 10:36:01 AM
1class Solution:
2    def hasAlternatingBits(self, n: int) -> bool:
3        s = bin(n)[2:]
4        n = len(s)
5        for i in range(1, n):
6            if s[i] == s[i - 1]:
7                return False
8        return True
9