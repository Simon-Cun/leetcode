# Last updated: 2/19/2026, 1:43:35 PM
1class Solution:
2    def reverseBits(self, n: int) -> int:
3        s = bin(n)[2::]
4        s = s.rjust(32, '0')
5        s = s[::-1]
6        print(s)
7        return int(s, 2)