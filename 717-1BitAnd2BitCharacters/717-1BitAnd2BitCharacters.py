# Last updated: 1/14/2026, 5:18:03 PM
class Solution:
    def isOneBitCharacter(self, bits: List[int]) -> bool:
        i = 0
        n = len(bits)

        while i < n - 1:
            if bits[i] == 1:
                i += 2
            else:
                i += 1

        return i == n - 1