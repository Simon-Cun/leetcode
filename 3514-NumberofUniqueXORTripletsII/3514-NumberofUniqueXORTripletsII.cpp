// Last updated: 7/24/2026, 2:09:42 PM
1class Solution {
2public:
3    int uniqueXorTriplets(vector<int>& nums) {
4        int n = nums.size();
5        if (n < 3) return n;
6        int ret = 1;
7        while (n >= pow(2, ret)) ++ret;
8        return 1 << ret;
9    }
10};