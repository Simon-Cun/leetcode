# Last updated: 2/20/2026, 3:26:48 PM
1class Solution:
2    def merge(self, nums1: List[int], m: int, nums2: List[int], n: int) -> None:
3        """
4        Do not return anything, modify nums1 in-place instead.
5        """
6        m -= 1
7        n -= 1
8        r = len(nums1) - 1
9        while nums2:
10            print(m, n)
11            if m == -1 or nums1[m] < nums2[n]:
12                nums1[r] = nums2[n]
13                r -= 1
14                n -= 1
15                nums2.pop()
16            else:
17                nums1[r] = nums1[m]
18                nums1[m] = 0
19                r -= 1
20                m -= 1
21        
22                
23                