// Last updated: 7/24/2026, 10:55:33 PM
1class Solution {
2public:
3    bool dfs(vector<vector<char>>& board, string word, int r, int c, int i) {
4        if (word.at(i) != board.at(r).at(c)) return false;
5        if (i == word.size() - 1) return true;
6        char tmp = board.at(r).at(c);
7        board.at(r).at(c) = '#';
8        if (r + 1 < board.size() && dfs(board, word, r + 1, c, i + 1)) return true;
9        if (r - 1 >= 0 && dfs(board, word, r - 1, c, i + 1)) return true;
10        if (c + 1 < board.at(0).size() && dfs(board, word, r, c + 1, i + 1)) return true;
11        if (c - 1 >= 0 && dfs(board, word, r, c - 1, i + 1)) return true;
12        board.at(r).at(c) = tmp;
13        return false;
14    }
15    bool exist(vector<vector<char>>& board, string word) {
16        for (int i = 0; i < board.size(); ++i) {
17            for (int j = 0; j < board.at(0).size(); ++j) {
18                if (dfs(board, word, i, j, 0)) {
19                    return true;
20                }
21            }
22        }
23        return false;
24    }
25};