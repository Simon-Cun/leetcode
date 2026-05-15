// Last updated: 5/15/2026, 10:57:46 AM
1class Solution {
2public:
3    int search(vector<int>& nums, int target) {
4        int l = 0, r = nums.size() - 1;
5        while (l <= r) {
6            int m = l + (r - l) / 2;
7            if (nums.at(m) > nums.at(r)) {
8                if (nums.at(m) == target) {
9                    return m;
10                } else if (nums.at(l) <= target and target < nums.at(m)) {
11                    r = m - 1;
12                } else {
13                    l = m + 1;
14                }
15            } else {
16                if (nums.at(m) == target) {
17                    return m;
18                } else if (nums.at(m) < target and target <= nums.at(r)) {
19                    l = m + 1;
20                } else {
21                    r = m - 1;
22                }
23            }
24        }
25        return -1;
26    }
27};