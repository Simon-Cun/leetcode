# Last updated: 1/24/2026, 5:17:17 PM
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
11            print(res)
12
13        return res
14# 9 7 4 1