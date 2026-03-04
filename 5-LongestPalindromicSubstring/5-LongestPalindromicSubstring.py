# Last updated: 3/4/2026, 1:41:46 PM
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
12        
13        for i in range(n - 3, -1, -1):
14            for j in range(n - 1, i + 1, -1):
15                if s[i] == s[j] and dp[i + 1][j - 1]:
16                    dp[i][j] = True
17        res = s[0]
18        for i in range(n):
19            for j in range(n):
20                if dp[i][j] == True:
21                    if len(res) < len(s[i:j + 1]):
22                        res = s[i:j + 1]
23        return res
24        