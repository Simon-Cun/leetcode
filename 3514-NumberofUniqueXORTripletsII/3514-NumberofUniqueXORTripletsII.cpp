// Last updated: 7/24/2026, 10:07:56 AM
1#include <algorithm>
2#include <vector>
3class Solution {
4public:
5    int findGCD(vector<int>& nums) {
6        int small = *min_element(nums.begin(), nums.end()), large = *max_element(nums.begin(), nums.end());
7        int gcd = 1;
8        for (int i = 1; i <= large; ++i) {
9            if (small % i == 0 && large % i == 0) {
10                gcd = i;
11            }
12        }
13        return gcd;
14    }
15};