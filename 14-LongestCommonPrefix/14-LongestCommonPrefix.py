# Last updated: 1/17/2026, 12:28:08 PM
1class Solution:
2    def longestCommonPrefix(self, strs: List[str]) -> str:
3        strs.sort()
4
5        string_1 = strs[0]
6        string_2 = strs[-1]
7        n = min(len(string_1), len(string_2))
8
9        prefix = ""
10        for i in range(n):
11            if string_1[i] == string_2[i]:
12                prefix += string_1[i]
13            else:
14                break
15        
16        return prefix
17
18
19        