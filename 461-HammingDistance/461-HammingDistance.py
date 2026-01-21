# Last updated: 1/21/2026, 10:04:22 AM
1class Solution:
2    def hammingDistance(self, x: int, y: int) -> int:
3        return sum(list(map(int, bin(x ^ y)[2:])))