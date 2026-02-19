# Last updated: 2/18/2026, 10:06:49 PM
1class Solution:
2    def countBinarySubstrings(self, s: str) -> int:
3        prev = s[0]
4        count = 0
5        freq = []
6        for curr in s:
7            if curr == prev:
8                count += 1
9                prev = curr
10            else:
11                prev = curr
12                freq.append(count)
13                count = 1
14        else:
15            freq.append(count)
16        res = 0
17        for i in range(len(freq) - 1):
18            print(i)
19            res += min(freq[i], freq[i + 1])
20
21        return res
22