// Last updated: 5/19/2026, 10:05:27 AM
1class Solution {
2public:
3    int getCommon(vector<int>& nums1, vector<int>& nums2) {
4        int ptr1 = 0, ptr2 = 0;
5        while (ptr1 < nums1.size() && ptr2 < nums2.size()) {
6            if (nums1.at(ptr1) == nums2.at(ptr2)) return nums1.at(ptr1);
7            else if (nums1.at(ptr1) < nums2.at(ptr2)) ++ptr1;
8            else ++ptr2;
9        }
10        return -1;
11    }
12};