// Last updated: 7/25/2026, 7:50:27 PM
1class Solution {
2public:
3    void backtrack(vector<int>& nums, vector<vector<int>>& res, vector<int> curr, unordered_set<int> visited) {
4        if (curr.size() == nums.size()) {
5            res.push_back(curr);
6            return;
7        }
8        for (int i = 0; i < nums.size(); ++i) {
9            if (i > 0 && nums[i] == nums[i - 1] && !visited.contains(i - 1)) continue;
10            if (!visited.contains(i)) {
11                visited.insert(i);
12                curr.push_back(nums.at(i));
13                backtrack(nums, res, curr, visited);
14                visited.erase(i);
15                curr.pop_back();
16            }
17        }
18    }
19    vector<vector<int>> permuteUnique(vector<int>& nums) {
20        sort(nums.begin(), nums.end());
21        vector<vector<int>> res;
22        backtrack(nums, res, vector<int>(), unordered_set<int>());
23        return res;
24        
25    }
26};