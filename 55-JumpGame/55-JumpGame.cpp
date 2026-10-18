// Last updated: 10/18/2026, 2:38:08 PM
1class Solution {
2public:
3    bool canJump(vector<int>& nums) {
4        int have = 0;
5        for (int i = 0; i < nums.size() - 1; ++i) {
6            if (have < nums.at(i)) {
7                have = nums.at(i);
8            }
9            if (have == 0) return false;
10            --have;
11        }
12        return true;
13    }
14};