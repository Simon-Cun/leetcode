# Last updated: 1/14/2026, 5:18:00 PM
class Solution:
    def possibleBipartition(self, n: int, dislikes: List[List[int]]) -> bool:
        g = [[] for _ in range(n + 1)]
        for i, j in dislikes:
            g[i].append(j)
            g[j].append(i)
        
        v = [-1] * (n + 1)
        def bfs(c):
            q = deque([c])
            v[c] = 0

            while q:
                curr = q.popleft()
                for i in g[curr]:
                    if v[i] == -1:
                        q.append(i)
                        v[i] = 1 - v[curr]
                    elif v[i] == v[curr]:
                        return False
                
            return True

        for i in range(1, n + 1):
            if v[i] == -1:
                if not bfs(i):
                    return False

        return True