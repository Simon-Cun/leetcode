# Last updated: 1/14/2026, 5:18:35 PM
class Solution:
    def uniquePaths(self, m: int, n: int) -> int:
        if m == 1 or n == 1:
            return 1
        m -= 1
        n -= 1
        if m < n:
            m, n = n, m
        res = 1
        j = 1
        for i in range(m + 1, m + n + 1):
            res *= i
            res //= j
            j += 1
        
        return int(res)