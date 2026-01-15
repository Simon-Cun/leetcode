# Last updated: 1/14/2026, 5:18:32 PM
class Solution:
    def mySqrt(self, x: int) -> int:
        count = 0
        while True:
            ans = count * count
            if x == ans:
                return count
            elif x < ans:
                return count - 1
            count += 1
        return 0