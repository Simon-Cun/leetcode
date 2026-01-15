# Last updated: 1/14/2026, 5:17:51 PM
class Solution:
    def numOfWays(self, n: int) -> int:
        mod = 10 ** 9 + 7
        A = B = 6

        for i in range(2, n + 1):
            A, B = (2*A + 2*B) % mod, (2*A + 3*B) % mod
        
        return (A + B) % mod