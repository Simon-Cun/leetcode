# Last updated: 2/4/2026, 9:19:48 PM
1class Solution:
2    def constructTransformedArray(self, nums: List[int]) -> List[int]:
3        n = len(nums)
4        res = [0] * n
5        for i in range(n):
6            if nums[i] != 0:
7                res[i] = nums[(i + nums[i]) % n]
8        return res
9