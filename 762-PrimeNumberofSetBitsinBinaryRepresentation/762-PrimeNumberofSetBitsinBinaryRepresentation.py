# Last updated: 2/20/2026, 5:16:18 PM
1class Solution:
2    def countPrimeSetBits(self, left: int, right: int) -> int:
3        def is_prime(n):
4            if n < 2:
5                return False
6            for i in range(2, int(n**0.5) + 1):
7                if n % i == 0:
8                    return False
9            return True
10        res = 0
11        for i in range(left, right + 1):
12            if is_prime(i.bit_count()):
13                res += 1
14        return res