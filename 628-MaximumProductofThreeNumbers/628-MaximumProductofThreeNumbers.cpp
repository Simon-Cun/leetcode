// Last updated: 7/25/2026, 6:07:51 PM
1class Solution {
2public:
3    int maximumProduct(vector<int>& nums) {
4        sort(nums.begin(), nums.end());
5        return max(nums.at(0) * nums.at(1) * nums.at(nums.size() - 1), nums.at(nums.size() - 1) * nums.at(nums.size() - 2) * nums.at(nums.size() - 3));
6    }
7};