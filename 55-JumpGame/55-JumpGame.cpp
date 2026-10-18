// Last updated: 10/17/2026, 6:02:44 PM
1class Solution {
2public:
3    bool canJump(vector<int>& nums) {
4        if (nums.at(0) == 0 && nums.size() == 1) return true;
5        int i = 0;
6        int has = nums.at(0);
7        while (i < nums.size()) {
8            if (has == 0) return false;
9            else --has;
10            if (has < nums.at(i)) has = nums.at(i);
11            ++i;
12        }
13        return true;
14    }
15};