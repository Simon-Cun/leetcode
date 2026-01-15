# Last updated: 1/14/2026, 5:18:31 PM
class Solution:
    def climbStairs(self, n: int) -> int:
        one = 0
        two = 1
        num = 0
        for i in range(n):
            num = one + two
            one = two
            two = num
        return num