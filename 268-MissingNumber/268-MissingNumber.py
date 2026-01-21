# Last updated: 1/21/2026, 9:44:27 AM
1class Solution:
2    def missingNumber(self, nums: List[int]) -> int:
3        res = 0
4        for i in range(len(nums) + 1):
5            res ^= i
6        
7        for i in nums:
8            res ^= i
9
10        return res
11