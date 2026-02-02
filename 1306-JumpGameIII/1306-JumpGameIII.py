# Last updated: 2/2/2026, 3:36:37 PM
1class Solution:
2    def canReach(self, arr: List[int], start: int) -> bool:
3        g = [[] for _ in range(len(arr))]
4        target = set()
5        for i, n in enumerate(arr):
6            if n == 0:
7                target.add(i)
8            if 0 <= i - n:
9                g[i].append(i - n)
10            if i + n < len(arr):
11                g[i].append(i + n)
12                
13        q = deque([start])
14        v = [-1] * len(arr)
15        while q:
16            curr = q.pop()
17            for i in g[curr]:
18                if i in target:
19                    return True
20                elif v[i] == -1:
21                    q.append(i)
22                    v[i] = 0
23
24        return False