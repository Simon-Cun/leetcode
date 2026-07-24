// Last updated: 7/24/2026, 1:57:39 PM
1class Solution {
2public:
3    void backtrack(unordered_set<int> cols, unordered_set<int> negDiag, unordered_set<int> posDiag, vector<vector<char>> board, vector<vector<string>>& res, int r, int n) {
4        if (r == n) {
5            vector<string> arr;
6            for (auto& i : board) {
7                string tmp = "";
8                for (auto& j : i) {
9                    tmp += j;
10                }
11                arr.push_back(tmp);
12            }
13            res.push_back(arr);
14            return;
15        }
16        for (int c = 0; c < n; ++c) {
17            if (cols.contains(c) || negDiag.contains(r - c) || posDiag.contains(r + c)) continue;
18            cols.insert(c);
19            posDiag.insert(r + c);
20            negDiag.insert(r - c);
21            board.at(r).at(c) = 'Q';
22
23            backtrack(cols, negDiag, posDiag, board, res, r + 1, n);
24
25            cols.erase(c);
26            posDiag.erase(r + c);
27            negDiag.erase(r - c);
28            board.at(r).at(c) = '.';
29        }
30        
31    }
32    vector<vector<string>> solveNQueens(int n) {
33        vector<vector<string>> res;
34        vector<vector<char>> board(n, vector<char>(n, '.'));
35        backtrack(unordered_set<int>(), unordered_set<int>(), unordered_set<int>(), board, res, 0, n);
36        return res;
37    }
38};