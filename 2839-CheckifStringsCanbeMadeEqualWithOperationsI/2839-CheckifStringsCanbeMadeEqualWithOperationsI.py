# Last updated: 3/29/2026, 1:05:42 PM
1import math
2class Solution:
3    def canBeEqual(self, s1: str, s2: str) -> bool:
4        a = sorted([s1[0], s1[2]])
5        b = sorted([s1[1], s1[3]])
6        c = sorted([s2[0], s2[2]])
7        d = sorted([s2[1], s2[3]])
8        return a == c and b == d