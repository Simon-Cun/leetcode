// Last updated: 7/25/2026, 7:19:34 PM
1class Solution {
2public:
3    void backtrack(vector<int>& nums, vector<int> curr, unordered_set<int> v, vector<vector<int>> & res) {
4        if (curr.size() == nums.size()) {
5            res.push_back(curr);
6            return;
7        }
8        for (int i = 0; i < nums.size(); ++i) {
9            if (!v.contains(i)) {
10                v.insert(i);
11                curr.push_back(nums.at(i));
12                backtrack(nums, curr, v, res);
13                v.erase(i);
14                curr.pop_back();
15            }
16        }
17    }
18    vector<vector<int>> permute(vector<int>& nums) {
19        vector<vector<int>> res;
20        backtrack(nums, vector<int>(), unordered_set<int>(), res);
21        return res;
22    }
23};