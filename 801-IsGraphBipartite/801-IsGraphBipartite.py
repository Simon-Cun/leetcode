# Last updated: 1/14/2026, 5:18:01 PM
class Solution:
    def isBipartite(self, graph: List[List[int]]) -> bool:
        n = len(graph)
        v = [-1] * n

        def bfs(c):
            q = deque([c])
            v[c] = 0

            while q:
                curr = q.popleft()
                for i in graph[curr]:
                    if v[i] == -1:
                        v[i] = 1 - v[curr]
                        q.append(i)
                    elif v[i] == v[curr]:
                        return False

            return True

        for i in range(n):
            if v[i] == -1:
                if not bfs(i):
                    return False

        return True