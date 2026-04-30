# Last updated: 4/29/2026, 6:16:00 PM
1class Solution:
2    def checkInclusion(self, s1: str, s2: str) -> bool:
3        c1 = [0] * 26
4        for i in s1:
5            c1[ord(i) - ord('a')] += 1
6        l = 0
7        c2 = [0] * 26
8        for i in range(len(s2)):
9            print(l, i)
10            print(c1)
11            print(c2)
12            print()
13            c2[ord(s2[i]) - ord('a')] += 1
14            if i >= len(s1):
15                c2[ord(s2[l]) - ord('a')] -= 1
16                l += 1
17            if c1 == c2: return True
18        return False