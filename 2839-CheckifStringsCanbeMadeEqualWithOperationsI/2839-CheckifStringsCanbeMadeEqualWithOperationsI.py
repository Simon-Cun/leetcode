# Last updated: 3/29/2026, 1:03:47 PM
1import math
2class Solution:
3    def canBeEqual(self, s1: str, s2: str) -> bool:
4        s = set(s2)
5        for i in s1:
6            if i not in s:
7                return False
8        l1, l2 = list(s1), list(s2)
9        swaps_needed = 0
10        for i, j in zip(l1, l2):
11            if i != j:
12                swaps_needed += 1
13        print(swaps_needed)
14        swaps_needed = math.ceil(swaps_needed / 2)
15        if swaps_needed == 0:
16            return True
17        elif swaps_needed == 1:
18            if l1[0] == l2[2] and l1[2] == l2[0]:
19                return True
20            elif l1[1] == l2[3] and l1[3] == l2[1]:
21                return True
22        elif swaps_needed == 2:
23            if l1[0] == l2[2] and l1[2] == l2[0] and l1[1] == l2[3] and l1[3] == l2[1]:
24                return True
25        return False