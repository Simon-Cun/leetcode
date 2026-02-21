# Last updated: 2/20/2026, 5:19:12 PM
1class Solution:
2    def countPrimeSetBits(self, left: int, right: int) -> int:
3        primes = {2,3,5,7,11,13,17,19}
4
5        res = 0
6        for i in range(left, right + 1):
7            if i.bit_count() in primes:
8                res += 1
9        return res