// Last updated: 4/24/2026, 5:02:32 PM
1class Solution {
2public:
3    int removeDuplicates(vector<int>& nums) {
4        int k = 1;
5        for (int i = 1; i < nums.size(); ++i) {
6            if (nums.at(i) != nums.at(i - 1)) {
7                nums.at(k++) = nums.at(i);
8            }
9        }
10        return k;
11    }
12};