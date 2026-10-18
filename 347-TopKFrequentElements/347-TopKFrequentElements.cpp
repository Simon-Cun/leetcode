// Last updated: 10/17/2026, 5:39:30 PM
1class Solution {
2public:
3    vector<int> topKFrequent(vector<int>& nums, int k) {
4        vector<vector<int>> buckets(nums.size() + 1);
5        unordered_map<int, int> hash;
6        for (auto& i : nums) hash[i]++;
7        for (auto& i : hash) {
8            buckets.at(i.second).push_back(i.first);
9        }
10        reverse(buckets.begin(), buckets.end());
11        vector<int> ret;
12        for (auto& i : buckets) {
13            for (auto& j : i) {
14                if (ret.size() == k) {
15                    return ret;
16                } else {
17                    ret.push_back(j);
18                }
19            }
20        }
21        return ret;
22    }
23};