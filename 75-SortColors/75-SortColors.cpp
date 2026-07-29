// Last updated: 7/28/2026, 11:18:34 PM
1class Solution {
2public:
3    void sortColors(vector<int>& nums) {
4        int l = 0, m = 0, r = nums.size() - 1;
5        while (m <= r) {
6            if (nums.at(m) == 0) {
7                swap(nums.at(m), nums.at(l));
8                ++l;
9                ++m;
10            } else if (nums.at(m) == 2) {
11                swap(nums.at(m), nums.at(r));
12                --r;
13            } else {
14                ++m;
15            }
16        }
17    }
18};