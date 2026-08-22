// Last updated: 8/21/2026, 11:51:25 PM
1class Solution {
2public:
3    int minSubArrayLen(int target, vector<int>& nums) {
4        int curr = 0;
5        if (accumulate(nums.begin(), nums.end(),0) < target) return 0;
6        int ret= INT_MAX;
7        int l = 0, r = 0;
8        while (r < nums.size()) {
9            curr += nums.at(r);
10            ++r;
11            while (curr >= target) {
12                ret = min(ret, r - l);
13                curr -= nums.at(l);
14                ++l;
15            }
16            
17        }
18        return ret;
19    }
20};