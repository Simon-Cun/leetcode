// Last updated: 7/31/2026, 6:38:35 PM
1class Solution {
2public:
3    int firstMissingPositive(vector<int>& nums) {
4        for (int i = 0; i < nums.size(); ++i) {
5            while (nums.at(i) > 0 && nums.at(i) <= nums.size() && nums.at(nums.at(i) - 1) != nums.at(i)) {
6                swap(nums.at(i), nums.at(nums.at(i) - 1));
7            }
8            
9        }
10        for (int i = 0; i < nums.size(); ++i) {
11            if (nums.at(i) != i + 1) {
12                return i + 1;
13            }
14        }
15        return nums.size() + 1;
16    }
17};