# Last updated: 1/14/2026, 5:17:58 PM
class Solution:
    def fib(self, n: int) -> int:
        if n == 0:
            return 0
        a = 0
        b = 1
        for _ in range(n - 1):
            a, b = b, (a + b)
        return b