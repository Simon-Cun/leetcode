# Last updated: 1/18/2026, 8:23:01 PM
1class Solution:
2    def divide(self, dividend: int, divisor: int) -> int:
3        if dividend == -2**31 and divisor == -1:
4            return 2**31 - 1
5        return int(dividend / divisor)