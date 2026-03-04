# Last updated: 3/3/2026, 6:43:27 PM
1from functools import lru_cache
2class Solution:
3    def lengthOfLIS(self, nums: List[int]) -> int:
4        n = len(nums)
5        dp = [1] * n
6        for i in range(n):
7            for j in range(i):
8                if nums[j] < nums[i]:
9                    dp[i] = max(dp[i], dp[j] + 1)
10        return max(dp)