# Last updated: 3/1/2026, 12:15:50 PM
1from functools import lru_cache
2class Solution:
3    def fib(self, n: int) -> int:
4        if n == 0:
5            return 0
6        elif n <= 2:
7            return 1
8        else:
9            return self.fib(n - 1) + self.fib(n - 2)