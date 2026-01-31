# Last updated: 1/31/2026, 12:35:04 PM
1class Solution:
2    def canJump(self, nums: List[int]) -> bool:
3        gas = 0
4        for n in nums:
5            if gas < 0:
6                return False
7            elif gas < n:
8                gas = n
9            gas -= 1
10        return True