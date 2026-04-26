// Last updated: 4/25/2026, 8:21:31 PM
1class Solution {
2public:
3    string convert(string s, int numRows) {
4        if (numRows == 1 or s.size() <= numRows) return s;
5        vector<string> rows(numRows, "");
6        int rowIdx = 0;
7        bool down = false;
8        for (auto& i : s) {
9            rows.at(rowIdx) += i;
10            if (rowIdx == 0 or rowIdx == (numRows - 1)) down = not down;
11            rowIdx += down ? 1 : -1;
12        }
13        string ret;
14        for (auto& i : rows) ret += i;
15
16        return ret;
17    }
18};