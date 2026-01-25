# Last updated: 1/25/2026, 2:25:09 PM
1class Solution:
2    def minimumDifference(self, nums: List[int], k: int) -> int:
3        nums.sort()
4
5        res = float('inf')
6
7        for i in range(len(nums) - k + 1):
8            res = min(res, nums[k + i - 1] - nums[i])
9
10        return res