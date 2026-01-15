# Last updated: 1/14/2026, 5:17:38 PM
class Solution:
    def smallestNumber(self, n: int) -> int:
        count = 0
        while True:
            if n <= (2 ** count - 1):
                return 2 ** count - 1
            count += 1