// Last updated: 6/7/2026, 10:12:14 AM
1class Solution {
2public:
3    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
4        vector<int> arr;
5        arr.insert(arr.end(), nums1.begin(), nums1.end());
6        arr.insert(arr.end(), nums2.begin(), nums2.end());
7        sort(arr.begin(), arr.end());
8        if (arr.size() % 2 == 0) {
9            return (arr.at(arr.size() / 2) + arr.at((arr.size() / 2) - 1)) / 2.0;
10        }
11        return arr.at(arr.size() / 2);
12
13    }
14};