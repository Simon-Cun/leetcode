# Last updated: 2/20/2026, 2:45:03 PM
1class Solution:
2    def merge(self, nums1: List[int], m: int, nums2: List[int], n: int) -> None:
3        """
4        Do not return anything, modify nums1 in-place instead.
5        """
6        i = 0
7        while i < n + m:
8            if nums2 and nums1[i] == 0:
9                nums1[i] = nums2.pop()
10            i += 1
11        nums1.sort()
12                