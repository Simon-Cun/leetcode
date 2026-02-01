# Last updated: 1/31/2026, 11:36:51 PM
1class Solution:
2    def minimumCost(self, nums: List[int]) -> int:
3        min1 = float('inf')
4        min2 = float('inf')
5
6        for i in nums[1:]:
7            if i < min1:
8                min2 = min1
9                min1 = i
10            elif i < min2:
11                min2 = i
12        
13        return nums[0] + min1 + min2