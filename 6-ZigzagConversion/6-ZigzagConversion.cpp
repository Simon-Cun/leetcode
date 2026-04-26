// Last updated: 4/25/2026, 8:20:25 PM
1class Solution {
2public:
3    string convert(string s, int numRows) {
4        if (numRows == 1 or s.size() <= numRows) return s;
5        vector<string> rows(numRows, "");
6        int rowIdx = 0;
7        bool down = false;
8        for (auto& i : s) {
9            rows.at(rowIdx) += i;
10            if (rowIdx == 0 or rowIdx == (numRows - 1)) {
11                down = not down;
12            }
13            rowIdx += down ? 1 : -1;
14        }
15        string ret;
16        for (auto& i : rows) ret += i;
17
18        return ret;
19    }
20};