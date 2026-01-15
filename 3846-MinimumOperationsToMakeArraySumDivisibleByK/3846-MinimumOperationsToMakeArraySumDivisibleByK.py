# Last updated: 1/14/2026, 5:17:40 PM
class Solution:
    def minOperations(self, nums: List[int], k: int) -> int:
        return sum(nums) % k