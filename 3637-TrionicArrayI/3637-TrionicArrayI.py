# Last updated: 2/2/2026, 5:06:28 PM
1class Solution:
2    def isTrionic(self, nums: List[int]) -> bool:
3        if len(nums) < 4:
4            return False
5        curr = 1
6        i1 = False
7        d = False
8        i2 = False
9        while curr < len(nums) and nums[curr - 1] < nums[curr]:
10            curr += 1
11            i1 = True
12        while curr < len(nums) and nums[curr - 1] > nums[curr]:
13            curr += 1
14            d = True
15        while curr < len(nums) and nums[curr - 1] < nums[curr]:
16            curr += 1
17            i2 = True
18        return i1 and i2 and d and curr == len(nums)