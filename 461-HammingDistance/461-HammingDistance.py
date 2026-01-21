# Last updated: 1/21/2026, 10:02:56 AM
1class Solution:
2    def hammingDistance(self, x: int, y: int) -> int:
3        x ^= y
4
5        res = 0
6        for i in bin(x)[2:]:
7            if i == '1':
8                res += 1
9        
10        return res