// Last updated: 7/25/2026, 7:48:42 PM
1class Solution {
2public:
3    void backtrack(vector<int>& nums, vector<vector<int>>& res, vector<int> curr, unordered_set<int> visited) {
4        if (curr.size() == nums.size()) {
5            res.push_back(curr);
6            return;
7        }
8        for (int i = 0; i < nums.size(); ++i) {
9            
10            if (!visited.contains(i)) {
11                if (i > 0 && nums[i] == nums[i - 1] && !visited.contains(i - 1)) continue;
12                visited.insert(i);
13                curr.push_back(nums.at(i));
14                backtrack(nums, res, curr, visited);
15                visited.erase(i);
16                curr.pop_back();
17            }
18        }
19    }
20    vector<vector<int>> permuteUnique(vector<int>& nums) {
21        sort(nums.begin(), nums.end());
22        vector<vector<int>> res;
23        backtrack(nums, res, vector<int>(), unordered_set<int>());
24        return res;
25        
26    }
27};