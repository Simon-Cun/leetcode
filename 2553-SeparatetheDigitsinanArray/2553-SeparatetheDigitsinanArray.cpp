// Last updated: 5/10/2026, 7:17:13 PM
1class Solution {
2public:
3    vector<int> separateDigits(vector<int>& nums) {
4        vector<int> ret;
5        for (auto& i : nums) for (auto& j : to_string(i)) ret.push_back(j - 
6        '0');
7        return ret;
8    }
9};