# Last updated: 1/21/2026, 10:07:45 AM
1class Solution:
2    def hammingDistance(self, x: int, y: int) -> int:
3        return (x ^ y).bit_count()