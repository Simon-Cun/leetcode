// Last updated: 10/13/2026, 11:56:33 AM
1class Solution {
2public:
3    long long maxAlternatingSum(vector<int>& nums) {
4        for (long long i = 0; i < nums.size(); ++i) nums.at(i) = abs(nums.at(i));
5        sort(nums.begin(), nums.end());
6        long long ret = 0;
7        for (long long i  = 0; i < (nums.size()) / 2; ++i) ret -= pow(nums.at(i), 2);
8        for (long long i  = nums.size() / 2; i < nums.size(); ++i) ret += pow(nums.at(i), 2);
9        return ret;
10    }
11};