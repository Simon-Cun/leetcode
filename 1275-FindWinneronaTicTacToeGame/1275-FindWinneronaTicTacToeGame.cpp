// Last updated: 10/17/2026, 4:53:23 PM
1class Solution {
2public:
3    string tictactoe(vector<vector<int>>& moves) {
4        vector<int> row(3, 0), col(3, 0);
5        int diag = 0, anti = 0;
6        for (int i = 0; i < moves.size(); ++i) {
7            int r = moves[i][0], c = moves[i][1];
8
9            int v;
10            if (i % 2 == 0) v = 1;
11            else v = -1;
12
13            row.at(r) += v;
14            col.at(c) += v;
15            if (r == c) diag += v;
16            if (r + c == 2) anti += v;
17
18            if (abs(row.at(r)) == 3 || abs(col.at(c)) == 3 || abs(diag) == 3 || abs(anti) == 3) {
19                if (v == 1) return "A";
20                else return "B";
21            }
22        }
23        if (moves.size() == 9) return "Draw";
24        else return "Pending";
25    }
26};