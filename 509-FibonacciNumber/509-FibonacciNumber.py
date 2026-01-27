# Last updated: 1/27/2026, 10:56:55 AM
1class Solution:
2    @lru_cache(None)
3    def fib(self, n: int) -> int:
4        if n == 0:
5            return 0
6        if n == 1:
7            return 1
8        
9        return self.fib(n - 1) + self.fib(n - 2)