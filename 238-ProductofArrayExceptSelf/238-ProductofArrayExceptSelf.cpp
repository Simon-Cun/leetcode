// Last updated: 10/17/2026, 11:48:16 PM
1class Solution {
2public:
3    vector<int> productExceptSelf(vector<int>& nums) {
4        vector<int> ret(nums.size(), 1);
5        int prefix = 1;
6        for (int i = 0; i < nums.size(); ++i) {
7            ret.at(i) *= prefix;
8            prefix *= nums.at(i);
9        }
10        int postfix = 1;
11        for (int i = nums.size() - 1; i >= 0; --i) {
12            ret.at(i) *= postfix;
13            postfix *= nums.at(i);
14        }
15        return ret;
16    }
17};