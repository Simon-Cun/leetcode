# Last updated: 1/20/2026, 6:36:51 PM
1class Solution:
2    def hammingWeight(self, n: int) -> int:
3        count = 0
4        bitmask = 1
5        while bitmask <= n:
6            if n & bitmask > 0:
7                count += 1
8            bitmask *= 2
9
10        return count 