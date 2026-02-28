# Last updated: 2/27/2026, 9:26:39 PM
1class Solution:
2    def concatenatedBinary(self, n: int) -> int:
3        s = ""
4        for i in range(1, n + 1):
5            s += bin(i)[2:]
6        return int(s, 2) % (10**9 + 7)