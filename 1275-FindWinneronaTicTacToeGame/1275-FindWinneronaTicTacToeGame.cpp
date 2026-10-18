// Last updated: 10/18/2026, 2:16:44 PM
1class Solution {
2public:
3    string tictactoe(vector<vector<int>>& moves) {
4        vector<int> rows(3, 0);
5        vector<int> cols(3, 0);
6        int diag = 0;
7        int anti = 0;
8        int count = 0;
9        for (int i = 0; i < moves.size(); ++i) {
10            int row = moves.at(i).at(0);
11            int col = moves.at(i).at(1);
12            int score = 0;
13            if (count % 2 == 0) {
14                score = 1;
15            } else {
16                score = -1;
17            }
18            rows.at(row) += score;
19            cols.at(col) += score;
20            if (row + col == 2) {
21                anti += score;
22            }
23            if (row == col) {
24                diag += score;
25            }
26            if (abs(rows.at(row)) == 3 || abs(cols.at(col)) == 3 || abs(diag) == 3 || abs(anti) == 3) {
27                if (score == 1) return "A";
28                else return "B";
29            }
30            ++count;
31            
32        }
33        if (moves.size() < 9) return "Pending";
34        else return "Draw";
35    }
36};