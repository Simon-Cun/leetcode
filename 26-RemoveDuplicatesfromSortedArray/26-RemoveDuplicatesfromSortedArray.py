# Last updated: 4/21/2026, 10:05:00 AM
1class Solution:
2    def removeDuplicates(self, nums: List[int]) -> int:
3        k = 1
4        for i in range(1, len(nums)):
5            if nums[i] != nums[i - 1]:
6                nums[k] = nums[i]
7                k += 1
8        return k