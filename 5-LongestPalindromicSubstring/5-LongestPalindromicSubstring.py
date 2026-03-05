# Last updated: 3/5/2026, 2:40:04 PM
1class Solution:
2    def longestPalindrome(self, s: str) -> str:
3        n = len(s)
4
5        dp = [[False] * n for _ in range(n)]
6
7        for i in range(n):
8            dp[i][i] = True
9        for i in range(n - 1):
10            if s[i] == s[i + 1]:
11                dp[i][i + 1] = True
12        for i in range(n - 2, -1, -1):
13            for j in range(n - 1, i + 1, - 1):
14                if s[i] == s[j] and dp[i + 1][j - 1]:
15                    dp[i][j] = True
16        res = ""
17        for i in range(n):
18            for j in range(n):
19                if dp[i][j] == True:
20                    if len(res) < len(s[i:j + 1]):
21                        res = s[i:j + 1]
22
23        return res