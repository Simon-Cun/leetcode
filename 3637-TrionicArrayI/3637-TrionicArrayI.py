# Last updated: 2/3/2026, 2:58:34 PM
1class Solution:
2    def maxFreqSum(self, s: str) -> int:
3        d = {'a', 'e', 'i', 'o', 'u'}
4        c_map = [0] * 26
5        v_map = [0] * 26
6        for i in s:
7            if i in d:
8                v_map[ord(i) - ord('a')] += 1
9            else:
10                c_map[ord(i) - ord('a')] += 1
11        return max(v_map) + max(c_map)