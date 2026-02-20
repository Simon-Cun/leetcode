# Last updated: 2/20/2026, 2:43:32 PM
1class Solution:
2    def merge(self, nums1: List[int], m: int, nums2: List[int], n: int) -> None:
3        """
4        Do not return anything, modify nums1 in-place instead.
5        """
6        nums2.reverse()
7        i = 0
8        while i < n + m:
9            if nums2 and nums1[i] == 0:
10                nums1[i] = nums2.pop()
11            i += 1
12        nums1.sort()
13                