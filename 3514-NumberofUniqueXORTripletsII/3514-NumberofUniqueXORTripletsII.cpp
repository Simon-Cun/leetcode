// Last updated: 7/24/2026, 9:58:24 AM
1class Solution {
2public:
3    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
4        int n = grid.size(), m = grid.at(0).size();
5        vector<vector<int>> arr = grid;
6        for (int u = 0; u < k; ++u) {
7            for (int i = 0; i < n; ++i) {
8                for (int j = 0; j < m - 1; ++j) {
9                    arr[i][j + 1] = grid.at(i).at(j);
10                }
11            }
12            for (int i = 0; i < n - 1; ++i) {
13                arr[i + 1][0] = grid.at(i).at(m - 1);
14            }
15            arr.at(0).at(0) = grid[n - 1][m - 1];
16            grid = arr;
17        }
18        return arr;
19    }
20};