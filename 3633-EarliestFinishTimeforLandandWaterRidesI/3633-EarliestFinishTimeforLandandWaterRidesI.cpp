// Last updated: 6/6/2026, 12:22:29 PM
1class Solution {
2public:
3    vector<int> leftRightDifference(vector<int>& nums) {
4        int n = nums.size();
5
6        vector<int> leftSum(n, 0);
7        for (int i = 1; i < n; ++i) leftSum.at(i) = leftSum.at(i - 1) + nums.at(i - 1);
8
9        vector<int> rightSum(n, 0);
10        for (int i = n - 2; i >= 0; --i) rightSum.at(i) = rightSum.at(i + 1) + nums.at(i + 1);
11
12        vector<int> ret;
13        for (int i = 0; i < n; ++i) ret.push_back(abs(leftSum.at(i) - rightSum.at(i)));
14        return ret;
15    }
16};