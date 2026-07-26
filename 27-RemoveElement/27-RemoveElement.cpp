// Last updated: 7/26/2026, 10:22:15 AM
1class Solution {
2public:
3    int removeElement(vector<int>& nums, int val) {
4        int k = 0;
5        for (int i = 0; i < nums.size(); ++i) {
6            if (nums.at(i) != val) {
7                nums.at(k++) = nums.at(i);
8            }
9        }
10        return k;
11    }
12};