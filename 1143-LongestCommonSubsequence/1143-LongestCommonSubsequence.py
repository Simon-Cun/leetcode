# Last updated: 3/4/2026, 4:56:46 PM
1class Solution:
2    def longestCommonSubsequence(self, text1: str, text2: str) -> int:
3        n, m = len(text1), len(text2)
4        dp = [[0] * (m + 1) for _ in range(n + 1)]
5
6        for i in range(1, n + 1):
7            for j in range(1, m + 1):
8                if text1[i - 1] == text2[j - 1]:
9                    dp[i][j] = dp[i - 1][j - 1] + 1
10                else:
11                    dp[i][j] = max(dp[i][j - 1], dp[i - 1][j])
12        
13        return dp[n][m]