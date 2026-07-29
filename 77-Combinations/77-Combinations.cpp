// Last updated: 7/28/2026, 10:50:46 PM
1class Solution {
2public:
3    void backtrack(int n, int k, unordered_set<int> v, vector<vector<int>>& res, vector<int> curr) {
4        if (k == curr.size()) {
5            res.push_back(curr);
6            return;
7        }
8        for (int  i = 1; i <= n; ++i) {
9            if (!v.contains(i)) {
10                v.insert(i);
11                curr.push_back(i);
12                backtrack(n, k, v, res, curr);
13                curr.pop_back();
14            }
15        }
16    }
17    vector<vector<int>> combine(int n, int k) {
18        vector<vector<int>> res;
19        backtrack(n, k, unordered_set<int>(), res, vector<int>());
20        return res;
21    }
22};