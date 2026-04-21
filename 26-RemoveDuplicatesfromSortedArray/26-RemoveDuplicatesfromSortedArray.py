# Last updated: 4/21/2026, 10:10:55 AM
1class Solution:
2    def removeElement(self, nums: List[int], val: int) -> int:
3        k = 0
4        for i, n in enumerate(nums):
5            if n != val:
6                nums[k] = n
7                k += 1
8        return k