// Last updated: 7/25/2026, 8:24:41 PM
1class Solution {
2public:
3    int maxProduct(int n) {
4        vector<vector<int>> buckets(10);
5        while (n) {
6            int rem = n % 10;
7            n /= 10;
8            buckets.at(rem).push_back(rem);
9        }
10        reverse(buckets.begin(), buckets.end());
11        vector<int> nums;
12        for (auto& i : buckets) {
13            for (auto& j : i) {
14                nums.push_back(j);
15                if (nums.size() == 2) {
16                    return nums.at(0) * nums.at(1);
17                }
18            }
19        }
20        return -1;
21    }
22};