# Last updated: 1/18/2026, 12:29:12 AM
1class Solution:
2    def findOrder(self, numCourses: int, prerequisites: List[List[int]]) -> List[int]:
3        g = [[] for _ in range(numCourses)]
4        v = [-1] * numCourses
5        res = []
6
7        for i, j in prerequisites:
8            g[j].append(i)
9
10        def dfs(c):
11            if v[c] == 0:
12                return False
13            
14            if v[c] == 1:
15                return True
16            
17            v[c] = 0
18
19            for i in g[c]:
20                if not dfs(i):
21                    return False
22            
23            v[c] = 1
24            res.append(c)
25
26            return True
27        
28        for i in range(numCourses):
29            if v[i] == -1:
30                if not dfs(i):
31                    return []
32        
33        return res[::-1]
34