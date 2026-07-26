// Last updated: 7/25/2026, 8:22:33 PM
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
12        int count = 0;
13        for (auto& i : buckets) {
14            for (auto& j : i) {
15                nums.push_back(j);
16                if (nums.size() == 2) {
17                    return nums.at(0) * nums.at(1);
18                }
19            }
20        }
21        return -1;
22    }
23};