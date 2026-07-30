// Last updated: 7/29/2026, 7:21:26 PM
1class Solution {
2public:
3    int maxProduct(vector<int>& nums) {
4        sort(nums.begin(), nums.end(), greater());
5        return (nums.at(0) - 1) * (nums.at(1) - 1);
6    }
7};