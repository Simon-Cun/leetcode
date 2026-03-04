# Last updated: 3/4/2026, 10:46:27 AM
1class Solution:
2    def minDistance(self, word1: str, word2: str) -> int:
3        n, m = len(word1), len(word2)
4
5        dp  =[[0] * (m + 1) for _ in range(n + 1)]
6        
7        for i in range(m + 1):
8            dp[0][i] = i
9        for i in range(n + 1):
10            dp[i][0] = i
11        
12        for i in range(1, n + 1):
13            for j in range(1, m + 1):
14                if word1[i - 1] == word2[j - 1]:
15                    dp[i][j] = dp[i - 1][j - 1]
16                else:
17                    insert = dp[i][j - 1] + 1
18                    delete = dp[i - 1][j] + 1
19                    replace = dp[i - 1][j - 1] + 1
20
21                    dp[i][j] = min(insert, delete, replace)
22        return dp[n][m]