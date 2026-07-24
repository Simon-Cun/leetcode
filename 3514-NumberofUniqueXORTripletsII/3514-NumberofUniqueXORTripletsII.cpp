// Last updated: 7/24/2026, 9:09:24 AM
1class Solution {
2public:
3    int uniqueXorTriplets(vector<int>& nums) {
4        unordered_set<int> arr;
5        for (int i = 0; i < nums.size(); ++i) {
6            for (int j = 0; j < nums.size(); ++j) {
7                arr.insert(nums.at(i) ^ nums.at(j));
8            }
9        }
10        unordered_set<int> hash;
11        for (auto& i : nums) {
12            for (auto& j : arr) {
13                hash.insert(i ^ j);
14            }
15        }
16        return hash.size();
17    }
18};