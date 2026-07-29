// Last updated: 7/28/2026, 10:54:58 PM
1class Solution {
2public:
3    void backtrack(int n, int k, int start, vector<vector<int>>& res, vector<int>& curr) {
4        if (k == curr.size()) {
5            res.push_back(curr);
6            return;
7        }
8        for (int  i = start; i <= n; ++i) {
9            curr.push_back(i);
10            backtrack(n, k, i + 1, res, curr);
11            curr.pop_back();
12        }
13    }
14    vector<vector<int>> combine(int n, int k) {
15        vector<vector<int>> res;
16        vector<int> curr;
17        backtrack(n, k, 1, res, curr);
18        return res;
19    }
20};