# Last updated: 3/4/2026, 2:58:08 PM
1class Solution:
2    def longestPalindrome(self, s: str) -> str:
3        n = len(s)
4        dp = [[False] * n for _ in range(n)]
5
6        for i in range(n):
7            dp[i][i] = True
8        for i in range(n - 1):
9            if s[i]== s[i + 1]:
10                dp[i][i + 1] = True
11
12        for i in range(n - 3, -1, -1):
13            for j in range(n - 1, i + 1, -1):
14                if s[i] == s[j] and dp[i + 1][j - 1]:
15                    dp[i][j] = True
16        res = s[0]
17        for i in range(n):
18            for j in range(n):
19                if dp[i][j] == True:
20                    if len(res) < len(s[i:j + 1]):
21                        res = s[i:j + 1]
22        return res
23        