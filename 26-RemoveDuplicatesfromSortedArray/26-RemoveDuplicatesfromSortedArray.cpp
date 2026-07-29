// Last updated: 7/28/2026, 11:27:43 PM
1class Solution {
2public:
3    int removeDuplicates(vector<int>& nums) {
4        int k = 1;
5        for (int i = k; i < nums.size(); ++i) {
6            if (nums.at(i) != nums.at(i - 1)) {
7                nums.at(k++) = nums.at(i);
8            }
9        }
10        return k;
11    }
12};