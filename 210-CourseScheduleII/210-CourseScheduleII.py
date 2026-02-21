# Last updated: 2/21/2026, 9:23:23 AM
1class Solution:
2    def findOrder(self, n: int, prerequisites: List[List[int]]) -> List[int]:
3        g = [[] for _ in range(n)]
4        for i, j in prerequisites:
5            g[j].append(i)
6        
7        v = [-1] * n
8        stack = []
9        def dfs(c):
10            if v[c] == 0:
11                return False
12            if v[c] == 1:
13                return True
14            
15            v[c] = 0
16
17            for i in g[c]:
18                if not dfs(i):
19                    return False
20            stack.append(c)
21            v[c] = 1
22            return True
23        for i in range(n):
24            if v[i] == -1:
25                if not dfs(i):
26                    return []
27        
28        return stack[::-1]