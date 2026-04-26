// Last updated: 4/25/2026, 8:55:33 PM
1class Solution {
2public:
3    vector<int> searchRange(vector<int>& nums, int target) {
4        int l = 0, r = nums.size() - 1;
5        while (l <= r) {
6            int m = l + (r - l) / 2;
7            if (nums.at(m) >= target) {
8                r = m - 1;
9            } else {
10                l = m + 1;
11            }
12        }
13        int val1 = l;
14        l = 0, r = nums.size() - 1;
15        while (l <= r) {
16            int m = l + (r - l) / 2;
17            if (nums.at(m) <= target) {
18                l = m + 1;
19            } else {
20                r = m - 1;
21            }
22        }
23        int val2 = r;
24        if (val1 > val2 or val1 == nums.size()) return {-1, -1};
25        if (nums.at(val1) != target) return {-1, -1};
26        else return {val1, val2};
27    }
28};