# Last updated: 5/4/2026, 11:25:04 PM
1class Solution:
2    def maximalSquare(self, matrix: List[List[str]]) -> int:
3        dp = [[0] * len(matrix[0]) for _ in range(len(matrix))]
4
5        for i in range(len(matrix)): dp[i][0] = int(matrix[i][0]) # base case
6        for i in range(len(matrix[0])): dp[0][i] = int(matrix[0][i]) # base case
7
8        for i in range(1, len(matrix)):
9            for j in range(1, len(matrix[0])):
10                if matrix[i][j] == '1': # recurrence
11                    dp[i][j] = min(int(dp[i - 1][j]), int(dp[i][j - 1]), int(dp[i - 1][j - 1])) + 1
12        # getting the result
13        ret = 0
14        for i in dp:
15            ret = max(ret, max(i))
16        return ret * ret
17        