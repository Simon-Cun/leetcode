# Last updated: 1/18/2026, 7:57:21 PM
1class Solution:
2    def possibleBipartition(self, n: int, dislikes: List[List[int]]) -> bool:
3        g = [[] for _ in range(n + 1)]
4        v = [-1] * (n + 1)
5
6        for i, j in dislikes:
7            g[i].append(j)
8            g[j].append(i)
9        
10        def bfs(c):
11            q = deque([c])
12            v[c] = 0
13
14            while q:
15                curr = q.popleft()
16                for i in g[curr]:
17                    if v[i] == -1:
18                        v[i] = 1 - v[curr]
19                        q.append(i)
20                    elif v[curr] == v[i]:
21                        return False
22            return True
23        
24        for i in range(1, n + 1):
25            if v[i] == -1:
26                if not bfs(i):
27                    return False
28            
29        return True
30