// Last updated: 8/22/2026, 10:43:13 AM
1class Solution {
2public:
3    int minSubArrayLen(int target, vector<int>& nums) {
4        int l = 0;
5        int curr = 0, ret = INT_MAX;
6        for (int r = 0; r < nums.size(); ++r) {
7            curr += nums.at(r);
8            while (curr >= target) {
9                ret = min(ret, r - l + 1);
10                curr -= nums.at(l);
11                ++l;
12            }
13        }
14        return (ret == INT_MAX) ? 0 : ret;
15    }
16};