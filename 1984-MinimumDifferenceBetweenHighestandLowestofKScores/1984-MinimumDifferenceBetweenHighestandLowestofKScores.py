# Last updated: 1/24/2026, 5:12:59 PM
1class Solution:
2    def minimumDifference(self, nums: List[int], k: int) -> int:
3        if k == 1:
4            return 0
5        
6        nums.sort(reverse=True)
7
8        res = float('inf')
9        for i in range(len(nums) - k + 1):
10            res = min(res, nums[i] - nums[i + k - 1])
11
12        return res
13