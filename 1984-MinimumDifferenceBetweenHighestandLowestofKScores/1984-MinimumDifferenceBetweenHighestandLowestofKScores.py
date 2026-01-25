# Last updated: 1/24/2026, 5:10:29 PM
1class Solution:
2    def minimumDifference(self, nums: List[int], k: int) -> int:
3        if k == 1:
4            return 0
5        nums.sort()
6        
7        res = float('inf')
8        for i in range(len(nums) - k + 1):
9            res = min(res, nums[i + k - 1] - nums[i])
10        
11        return res