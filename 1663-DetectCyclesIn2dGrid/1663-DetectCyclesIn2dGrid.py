# Last updated: 1/14/2026, 5:17:50 PM
class Solution:
    def containsCycle(self, grid: List[List[str]]) -> bool:
        direction = [[0, 1], [0, -1], [1, 0], [-1, 0]]
        v = set()
        def bfs(x, y):
            n = grid[x][y]
            v.add((x, y))
            q = deque([(x, y, -1, -1)])
            while q:
                x, y, px, py = q.popleft()
                for i, j in direction:
                    nx = x + i
                    ny = y + j
                    if nx >= 0 and ny >= 0 and nx < len(grid) and ny < len(grid[0]) and grid[nx][ny] == n:
                        if (nx, ny) == (px, py):
                            continue
                        if (nx, ny) in v:
                            return True
                        q.append((nx, ny, x, y))
                        v.add((nx, ny))
            return False



        for i in range(len(grid)):
            for j in range(len(grid[0])):
                if (i, j) not in v :
                    if bfs(i, j):
                        return True
        return False