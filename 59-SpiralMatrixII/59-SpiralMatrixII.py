# Last updated: 1/23/2026, 9:35:28 PM
1class Solution:
2    def generateMatrix(self, n: int) -> List[List[int]]:
3        spiral = [[0] * n for _ in range(n)]
4
5        l, r, t, b = 0, n - 1, 0, n - 1
6
7        counter = 1
8        while l <= r and t <= b:
9            for i in range(l, r + 1):
10                spiral[t][i] = counter
11                counter += 1
12            t += 1
13
14            for i in range(t, b + 1):
15                spiral[i][r] = counter
16                counter += 1
17            r -= 1
18
19            if l <= r:
20                for i in range(r, l - 1, -1):
21                    spiral[b][i] = counter
22                    counter += 1
23                b -= 1
24
25            if  t <= b:
26                for i in range(b, t - 1, -1):
27                    spiral[i][l] = counter
28                    counter += 1
29                l += 1
30
31        return spiral