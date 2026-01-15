# Last updated: 1/14/2026, 5:17:44 PM
class Solution:
    def findFinalValue(self, nums: List[int], original: int) -> int:
        while original in set(nums):
            original *= 2
        return original