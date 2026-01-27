# Last updated: 1/27/2026, 10:45:08 AM
1class Solution:
2    def climbStairs(self, n: int) -> int:
3        one = 0
4        two = 1
5        num = 0
6        for i in range(n):
7            num = one + two
8            one = two
9            two = num
10        return num