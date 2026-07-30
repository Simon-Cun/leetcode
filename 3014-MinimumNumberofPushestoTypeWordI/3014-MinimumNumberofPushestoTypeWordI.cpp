// Last updated: 7/29/2026, 7:26:33 PM
1class Solution {
2public:
3    int maxProduct(vector<int>& nums) {
4        int prev = 0, curr = 0;
5        for (int i = 0; i < nums.size(); ++i) {
6            if (nums.at(i) > curr) {
7                prev = curr;
8                curr = nums.at(i);
9            } else if (prev < nums.at(i)) {
10                prev = nums.at(i);
11            }
12        }
13        return (prev - 1) * (curr - 1);
14    }
15};