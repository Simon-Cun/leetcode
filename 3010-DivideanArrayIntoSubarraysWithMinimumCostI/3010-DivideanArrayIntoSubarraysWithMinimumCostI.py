# Last updated: 1/31/2026, 11:30:58 PM
1class Solution:
2    def minimumCost(self, nums: List[int]) -> int:
3        res = float('inf')
4        for i in range(1, len(nums)):
5            for j in range(i + 1, len(nums)):
6                print(f"{0} {i} {j}")
7                s = nums[0] + nums[i] + nums[j]
8                if res > s:
9                    res = s
10        return res