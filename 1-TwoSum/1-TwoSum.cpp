// Last updated: 10/17/2026, 11:07:29 PM
1class Solution {
2public:
3    vector<int> twoSum(vector<int>& nums, int target) {
4        unordered_map<int, int> hash;
5        for (int i = 0; i < nums.size(); ++i) {
6            int diff = target - nums.at(i);
7            if (hash.find(diff) != hash.end()) {
8                return {hash[diff], i};
9            } else {
10                hash[nums.at(i)] = i;
11            }
12        }
13        return {};
14    }
15};