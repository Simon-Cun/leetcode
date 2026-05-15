// Last updated: 5/15/2026, 10:45:48 AM
1class Solution {
2public:
3    int findMin(vector<int>& nums) {
4        int l = 0, r = nums.size() - 1;
5        while (l < r) {
6            int m = l + (r - l) / 2;
7            if (nums.at(m) > nums.at(r)) {
8                l = m + 1;
9            } else {
10                r = m;
11            }
12        }
13        return nums.at(l);
14    }
15};