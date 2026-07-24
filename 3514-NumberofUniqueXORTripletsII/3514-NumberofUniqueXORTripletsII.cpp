// Last updated: 7/24/2026, 2:06:42 PM
1#include <algorithm>
2#include <vector>
3class Solution {
4public:
5    int gcd(int a, int b) {
6        while (a % b != 0) {
7            int r = a % b;
8            a = b;
9            b = r;
10        }
11        return b;
12    }
13    int findGCD(vector<int>& nums) {
14        int small = *min_element(nums.begin(), nums.end()), large = *max_element(nums.begin(), nums.end());
15        return gcd(large, small);
16    }
17};