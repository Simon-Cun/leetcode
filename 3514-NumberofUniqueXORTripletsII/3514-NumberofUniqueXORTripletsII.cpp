// Last updated: 7/24/2026, 10:01:56 AM
1class Solution {
2public:
3    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
4        int m = grid.size(), n = grid.at(0).size();
5        vector<vector<int>> ret = grid;
6        while (k--) {
7            for (int i = 0; i < m; ++i) {
8                for (int j = 0; j < n - 1; ++j) {
9                    ret.at(i).at(j + 1) = grid.at(i).at(j);
10                }
11            }
12            for (int i = 0; i < m - 1; ++i) {
13                ret.at(i + 1).at(0) = grid.at(i).at(n - 1);
14            }
15            ret.at(0).at(0) = grid.at(m - 1).at(n - 1);
16            grid = ret;
17        }
18        return ret;
19    }
20};