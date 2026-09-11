// Last updated: 9/11/2026, 4:30:51 PM
1class Solution {
2public:
3    int removeElement(vector<int>& nums, int val) {
4        int k = 0;
5        for (int i = 0; i < nums.size(); ++i) {
6            if (nums.at(i) != val) nums.at(k++) = nums.at(i);
7        }
8        return k;
9    }
10};