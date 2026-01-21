# Last updated: 1/21/2026, 9:41:53 AM
1class Solution:
2    def singleNumber(self, nums: List[int]) -> int:
3        res = 0
4        for i in nums:
5            print(res)
6            res ^= i
7        return res