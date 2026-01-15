# Last updated: 1/14/2026, 5:18:13 PM
class Solution:
    def numIslands(self, grid: List[List[str]]) -> int:
        directions = [(1, 0), (-1, 0), (0, 1), (0, -1)]
        res = 0
        def bfs(x, y):
            queue = deque([(x, y)])
            grid[x][y] = "0"
            while queue:
                curr = queue.popleft()
                for h, v in directions:
                    new_x, new_y = curr[0] + h, curr[1] + v
                    if new_x < 0 or new_y < 0 or new_x >= len(grid) or new_y >= len(grid[0]) or grid[new_x][new_y] == "0":
                        continue
                    grid[new_x][new_y] = "0"
                    queue.append([new_x, new_y])
        for i in range(len(grid)):
            for j in range(len(grid[0])):
                if grid[i][j] == "1":
                    bfs(i, j)
                    res += 1
        print(grid)
        return res