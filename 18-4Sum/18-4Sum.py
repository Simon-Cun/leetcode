# Last updated: 1/18/2026, 12:16:19 AM
1class Solution:
2    def fourSum(self, nums: List[int], target: int) -> List[List[int]]:
3        nums.sort()
4        n = len(nums)
5        res = []
6        for i in range(n - 3):
7            if i > 0 and nums[i] == nums[i - 1]:
8                continue
9            for j in range(i + 1, n - 2):
10                if j > i + 1 and nums[j] == nums[j - 1]:
11                    continue
12
13                l, r = j + 1, len(nums) - 1
14                while l < r:
15                    s = nums[i] + nums[j] + nums[l] + nums[r]
16                    if s == target:
17                        res.append([nums[i], nums[j], nums[l], nums[r]])
18                        l += 1
19                        r -= 1
20                        while l < r and nums[l] == nums[l - 1]:
21                            l += 1
22                        while l < r and nums[r] == nums[r + 1]:
23                            r -= 1
24                    elif s < target:
25                        l += 1
26                    else:
27                        r -= 1
28        return res