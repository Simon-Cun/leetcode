// Last updated: 10/18/2026, 2:37:58 PM
1class Solution {
2public:
3    bool canJump(vector<int>& nums) {
4        if (nums.size() == 1) return true;
5        int have = 0;
6        for (int i = 0; i < nums.size() - 1; ++i) {
7            if (have < nums.at(i)) {
8                have = nums.at(i);
9            }
10            if (have == 0) return false;
11            --have;
12        }
13        return true;
14    }
15};