# Last updated: 1/18/2026, 12:23:44 AM
1class Solution:
2    def fourSum(self, nums: List[int], target: int) -> List[List[int]]:
3        n = len(nums)
4        res = []
5        nums.sort()
6        print(nums)
7
8        for i in range(n - 3):
9            if i > 0 and nums[i] == nums[i - 1]:
10                continue
11            for j in range(i + 1, n - 2):
12                if j > i + 1 and nums[j] == nums[j - 1]:
13                    continue
14                l, r = j + 1,  n - 1
15                while l < r:
16                    s = nums[i] + nums[j] + nums[l] + nums[r]
17                    if s < target:
18                        l += 1
19                    elif s > target:
20                        r -= 1
21                    else:
22                        res.append([nums[i], nums[j], nums[l], nums[r]])
23                        l += 1
24                        r -= 1
25                        while l < r and nums[l] == nums[l - 1]:
26                            l += 1
27                        while l < r and nums[r] == nums[r + 1]:
28                            r -= 1
29        return res
30                    