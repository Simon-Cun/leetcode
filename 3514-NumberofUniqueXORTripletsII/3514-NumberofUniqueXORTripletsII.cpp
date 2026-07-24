// Last updated: 7/24/2026, 3:03:15 PM
1class Solution {
2public:
3    long long sumAndMultiply(long long n) {
4        if (n == 0) return 0;
5        vector<long long> nums;
6        while (n != 0) {
7            if (n % 10 != 0) {
8            nums.push_back(n % 10);
9
10            }
11            n /= 10;
12        }
13        reverse(nums.begin(), nums.end());
14        int multiplier = accumulate(nums.begin(), nums.end(), 0);
15        vector<string> arr;
16        for (auto& i : nums) arr.push_back(to_string(i));
17        string num = "";
18        for (auto& i : arr) num += i;
19        long long ret = stoi(num);
20        return ret * multiplier;
21    }
22};