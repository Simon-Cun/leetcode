// Last updated: 5/10/2026, 7:19:59 PM
1class Solution {
2public:
3    vector<int> separateDigits(vector<int>& nums) {
4        vector<int> ret;
5        for (auto& i : nums) for (auto& j : to_string(i)) ret.push_back(j - '0');
6        return ret;
7    }
8};