// Last updated: 9/11/2026, 4:17:47 PM
1class Solution {
2public:
3    int removeDuplicates(vector<int>& nums) {
4        int k = 1;
5        for (int i = 1; i < nums.size(); ++i) {
6            if (nums.at(i) != nums.at(i - 1)) nums.at(k++) = nums.at(i);
7        }
8        return k;
9    }
10};