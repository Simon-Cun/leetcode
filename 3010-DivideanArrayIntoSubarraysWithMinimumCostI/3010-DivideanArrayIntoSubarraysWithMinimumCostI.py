# Last updated: 1/31/2026, 11:31:08 PM
1class Solution:
2    def minimumCost(self, nums: List[int]) -> int:
3        res = float('inf')
4        for i in range(1, len(nums)):
5            for j in range(i + 1, len(nums)):
6                s = nums[0] + nums[i] + nums[j]
7                if res > s:
8                    res = s
9        return res