# Last updated: 2/26/2026, 9:59:09 AM
1class Solution:
2    def numSteps(self, s: str) -> int:
3        res = 0
4        num = int(s, 2)
5        while num > 1:
6            if num & 1:
7                num += 1
8            else:
9                num >>= 1
10            res += 1
11        return res
12        
13