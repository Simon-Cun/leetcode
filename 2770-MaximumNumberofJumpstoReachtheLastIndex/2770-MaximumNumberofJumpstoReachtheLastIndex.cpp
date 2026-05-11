// Last updated: 5/10/2026, 8:16:14 PM
1class Solution {
2public:
3    vector<vector<int>> rotateGrid(vector<vector<int>>& grid, int k) {
4        int l = 0, r = grid.at(0).size() - 1, t = 0, b = grid.size() - 1;
5        while (l < r and t < b) {
6            cout << l << ' ' << r << ' ' << t << ' ' << b << endl;
7            vector<int> curr;
8            for (int i = l; i < r; ++i) curr.push_back(grid.at(t).at(i));
9            for (int i = t; i < b; ++i) curr.push_back(grid.at(i).at(r));
10            for (int i = r; i > l; --i) curr.push_back(grid.at(b).at(i));
11            for (int i = b; i > t; --i) curr.push_back(grid.at(i).at(l));
12
13            int rotations = k % curr.size();
14            rotate(curr.begin(), curr.begin() + rotations, curr.end());
15
16            int idx = 0;
17            for (int i = l; i < r; ++i) grid.at(t).at(i) = curr.at(idx++);
18            for (int i = t; i < b; ++i) grid.at(i).at(r) = curr.at(idx++);
19            for (int i = r; i > l; --i) grid.at(b).at(i) = curr.at(idx++);
20            for (int i = b; i > t; --i) grid.at(i).at(l) = curr.at(idx++);
21            ++l; ++t; --r; --b;
22        }
23        return grid;
24    }
25};