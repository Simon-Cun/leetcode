// Last updated: 5/15/2026, 9:55:41 PM
1class Solution {
2public:
3    int findMin(vector<int>& nums) {
4        int l = 0, r = nums.size() - 1;
5        while (l < r) {
6            int m = l + (r - l) / 2;
7            if (nums.at(m) > nums.at(r)) {
8                l = m + 1;
9            } else if (nums.at(m) != nums.at(r)) {
10                r = m;
11            } else {
12                --r;
13            }
14        }
15        return nums.at(l);
16    }
17};