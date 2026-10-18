// Last updated: 10/18/2026, 12:10:38 AM
1class Solution {
2public:
3    vector<vector<int>> threeSum(vector<int>& nums) {
4        sort(nums.begin(), nums.end());
5        vector<vector<int>> ret;
6        for (int i = 0; i < nums.size() - 1; ++i) {
7            if (i > 0 && nums.at(i) == nums.at(i - 1)) continue;
8            int l = i + 1, r = (nums.size() - 1);
9            while (l < r) {
10                int total = nums.at(l) + nums.at(i) + nums.at(r);
11                if (total == 0) {
12                    ret.push_back({nums.at(i), nums.at(l), nums.at(r)});
13                    while (l < r && nums.at(l) == nums.at(l + 1)) ++l;
14                    while (l < r && nums.at(r) == nums.at(r - 1)) --r;
15                    ++l;
16                    --r;
17                } else if (total > 0) {
18                    --r;
19                } else {
20                    ++l;
21                }
22            }
23        }
24        return ret;
25    }
26};