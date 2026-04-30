# Last updated: 4/29/2026, 6:16:27 PM
1class Solution:
2    def checkInclusion(self, s1: str, s2: str) -> bool:
3        c1 = [0] * 26
4        for c in s1:
5            c1[ord(c) - ord('a')] += 1
6        l = 0
7        c2 = [0] * 26
8        for r in range(len(s2)):
9            c2[ord(s2[r]) - ord('a')] += 1
10            if r >= len(s1):
11                c2[ord(s2[l]) - ord('a')] -= 1
12                l += 1
13            if c1 == c2: return True
14        return False