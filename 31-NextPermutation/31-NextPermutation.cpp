// Last updated: 5/11/2026, 1:22:02 PM
1class Solution {
2public:
3    void nextPermutation(vector<int>& nums) {
4        int idx1 = 0, idx2 = 0;
5        bool lastElement = true;
6        for (int i = nums.size() - 2; i >= 0; --i) {
7            if (nums.at(i) < nums.at(i + 1)) {
8                idx1 = i;
9                lastElement = false;
10                break;
11            }
12        }
13        for (int i = nums.size() - 1; i >= 0; --i) {
14            if (lastElement) break;
15            if (nums.at(i) > nums.at(idx1)) {
16                idx2 = i;
17                break;
18            }
19        }
20        if (!lastElement) {
21            swap(nums.at(idx1), nums.at(idx2));
22            reverse(nums.begin() + idx1 + 1, nums.end());
23        } else {
24            reverse(nums.begin(), nums.end());
25        }
26    }
27};