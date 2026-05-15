// Last updated: 5/15/2026, 10:58:32 AM
1class Solution {
2public:
3    int search(vector<int>& nums, int target) {
4        int l = 0, r = nums.size() - 1;
5        while (l <= r) {
6            int m = l + (r - l) / 2;
7            if (nums.at(m) == target) return m;
8            if (nums.at(m) > nums.at(r)) {
9                if (nums.at(l) <= target and target < nums.at(m)) {
10                    r = m - 1;
11                } else {
12                    l = m + 1;
13                }
14            } else {
15                if (nums.at(m) < target and target <= nums.at(r)) {
16                    l = m + 1;
17                } else {
18                    r = m - 1;
19                }
20            }
21        }
22        return -1;
23    }
24};