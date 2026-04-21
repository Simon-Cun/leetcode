# Last updated: 4/21/2026, 9:54:31 AM
1class Solution:
2    def canFinish(self, n: int, prerequisites: List[List[int]]) -> bool:
3        g = [[] for _ in range(n)]
4        for i, j in prerequisites:
5            g[j].append(i)
6            
7        v = [-1] * n
8        def dfs(c):
9            if v[c] == 0:
10                return False
11            
12            if v[c] == 1:
13                return True
14
15            v[c] = 0
16            for i in g[c]:
17                if not dfs(i):
18                    return False
19            
20            v[c] = 1
21            return True
22        for i in range(n):
23            if v[i] == -1:
24                if not dfs(i):
25                    return False
26        return True