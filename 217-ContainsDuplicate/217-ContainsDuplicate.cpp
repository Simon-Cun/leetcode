// Last updated: 10/17/2026, 11:17:58 PM
1class Solution {
2public:
3    bool containsDuplicate(vector<int>& nums) {
4        unordered_set<int> hash;
5        for (auto& i : nums) {
6            if (hash.find(i) != hash.end()) return true;
7            else hash.insert(i);
8        }
9        return false;
10    }
11};