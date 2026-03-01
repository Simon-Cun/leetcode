# Last updated: 3/1/2026, 12:15:43 PM
1from functools import lru_cache
2class Solution:
3    @lru_cache(None)
4    def fib(self, n: int) -> int:
5        if n == 0:
6            return 0
7        elif n <= 2:
8            return 1
9        else:
10            return self.fib(n - 1) + self.fib(n - 2)