// Last updated: 10/22/2026, 10:53:41 AM
1class Solution {
2public:
3    int subarraySum(vector<int>& nums, int k) {
4        unordered_map<int, int> mp;
5        mp[0] = 1;
6
7        int count = 0, total = 0;
8
9        for (const auto& num : nums) {
10            total += num;
11
12            if (mp.find(total - k) != mp.end()) {
13                count += mp[total - k];
14            }
15
16            mp[total]++;
17        }
18
19        return count;
20    }
21};