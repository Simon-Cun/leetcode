// Last updated: 7/24/2026, 10:00:49 AM
1class Solution {
2public:
3    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
4        int m = grid.size(), n = grid.at(0).size();
5        vector<vector<int>> arr = grid;
6        while (k--) {
7            for (int i = 0; i < m; ++i) {
8                for (int j = 0; j < n - 1; ++j) {
9                    arr[i][j + 1] = grid.at(i).at(j);
10                }
11            }
12            for (int i = 0; i < m - 1; ++i) {
13                arr[i + 1][0] = grid.at(i).at(n - 1);
14            }
15            arr.at(0).at(0) = grid[m - 1][n - 1];
16            grid = arr;
17        }
18        return arr;
19    }
20};