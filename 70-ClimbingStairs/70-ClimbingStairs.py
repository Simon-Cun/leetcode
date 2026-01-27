# Last updated: 1/27/2026, 10:49:28 AM
1class Solution:
2    @lru_cache(None)
3    def climbStairs(self, n: int) -> int:
4        if n < 2:
5            return 1
6        
7        return self.climbStairs(n - 1) + self.climbStairs(n - 2)