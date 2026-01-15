# Last updated: 1/14/2026, 5:17:42 PM
class Solution:
    def triangularSum(self, nums: List[int]) -> int:
        while len(nums) != 1:
            array = []
            for i in range(1, len(nums)):
                array.append((nums[i - 1] + nums[i]) % 10)
            nums = array
        return nums[0]