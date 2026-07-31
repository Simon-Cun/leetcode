// Last updated: 7/31/2026, 8:05:03 AM
1class Solution {
2public:
3    int removeDuplicates(vector<int>& nums) {
4        int k = 1;
5        for (int i = 1; i < nums.size(); ++i) if (nums.at(i - 1) != nums.at(i)) nums.at(k++) = nums.at(i);
6        return k;
7    }
8};