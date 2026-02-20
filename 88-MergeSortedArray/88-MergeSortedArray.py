# Last updated: 2/20/2026, 3:26:56 PM
1class Solution:
2    def merge(self, nums1: List[int], m: int, nums2: List[int], n: int) -> None:
3        """
4        Do not return anything, modify nums1 in-place instead.
5        """
6        m -= 1
7        n -= 1
8        r = len(nums1) - 1
9        while nums2:
10            if m == -1 or nums1[m] < nums2[n]:
11                nums1[r] = nums2[n]
12                r -= 1
13                n -= 1
14                nums2.pop()
15            else:
16                nums1[r] = nums1[m]
17                nums1[m] = 0
18                r -= 1
19                m -= 1
20        
21                
22                