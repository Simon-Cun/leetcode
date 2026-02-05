# Last updated: 2/4/2026, 9:18:22 PM
1class Solution:
2    def constructTransformedArray(self, nums: List[int]) -> List[int]:
3        n = len(nums)
4        res = [0] * n
5        for i in range(n):
6            print(res)
7            if nums[i] > 0:
8                res[i] = nums[(i + nums[i]) % n]
9            elif nums[i] < 0:
10                res[i] = nums[(i - abs(nums[i])) % n]
11        return res
12