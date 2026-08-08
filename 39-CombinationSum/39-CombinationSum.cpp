// Last updated: 8/7/2026, 9:35:07 PM
1class Solution {
2public:
3    void backtrack(vector<int>& candidates, int target, vector<vector<int>>& res, vector<int> curr, int sum, int start) {
4        if (sum == target) {
5            res.push_back(curr);
6            return;
7        }
8        for (int i = start; i < candidates.size(); ++i) {
9            if (candidates.at(i) + sum > target) break;
10            curr.push_back(candidates.at(i));
11            backtrack(candidates, target, res, curr, sum + candidates.at(i), i);
12            curr.pop_back();
13        }
14    }
15    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
16        sort(candidates.begin(), candidates.end());
17        vector<vector<int>> res;
18        backtrack(candidates, target, res, vector<int>(), 0, 0);
19        return res;
20    }
21};