# Last updated: 2/2/2026, 11:37:44 AM
1class Solution:
2    def maximumsSplicedArray(self, nums1: List[int], nums2: List[int]) -> int:
3        sum1 = sum(nums1)
4        sum2 = sum(nums2)
5
6        curr_sum1 = 0
7        max_sum1 = 0
8        curr_sum2 = 0
9        max_sum2 = 0
10
11        for i, j in zip(nums1, nums2):
12            curr_sum1 = max(curr_sum1, 0)
13            curr_sum2 = max(curr_sum2, 0)
14
15            curr_sum1 += j - i
16            curr_sum2 += i - j
17
18            max_sum1 = max(max_sum1, curr_sum1)
19            max_sum2 = max(max_sum2, curr_sum2)
20        
21        return max(sum1 + max_sum1, sum2 + max_sum2)