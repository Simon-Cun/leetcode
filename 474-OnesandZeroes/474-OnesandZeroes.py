# Last updated: 3/3/2026, 2:51:09 PM
1class Solution:
2    def findMaxForm(self, strs: List[str], m: int, n: int) -> int:
3        dp = [[[0]*(n+1) for _ in range(m+1)] for _ in range(len(strs)+1)]
4
5        for i in range(1, len(strs)+1):
6            s = strs[i-1]
7            zeros = s.count('0')
8            ones = s.count('1')
9
10            for j in range(m+1):
11                for k in range(n+1):
12
13                    # Option 1: skip this string
14                    dp[i][j][k] = dp[i-1][j][k]
15
16                    # Option 2: take this string (if possible)
17                    if j >= zeros and k >= ones:
18                        dp[i][j][k] = max(
19                            dp[i][j][k],
20                            dp[i-1][j-zeros][k-ones] + 1
21                        )
22
23        return dp[len(strs)][m][n]