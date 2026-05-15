// Last updated: 5/15/2026, 10:45:24 AM
1class Solution {
2public:
3    int findMin(vector<int>& nums) {
4        int l = 0, r = nums.size() - 1;
5        while (l < r) {
6            int m = l + (r - l) / 2;
7            cout << l << ' ' << m << ' ' << r << endl;
8            if (nums.at(m) > nums.at(r)) {
9                l = m + 1;
10            } else {
11                r = m;
12            }
13        }
14        return nums.at(l);
15    }
16};