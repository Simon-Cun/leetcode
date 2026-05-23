// Last updated: 5/23/2026, 10:25:04 AM
1class Solution {
2public:
3    bool check(vector<int>& nums) {
4        int count = 0;
5        for (int i = 1; i < nums.size() * 2; ++i) {
6            if (nums.at((i - 1) % nums.size()) > nums.at(i % nums.size())) {
7                ++count;
8            }
9            if (count > 2) return false;
10        }
11        return true;
12    }
13};