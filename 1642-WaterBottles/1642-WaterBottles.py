# Last updated: 1/14/2026, 5:17:49 PM
class Solution:
    def numWaterBottles(self, numBottles: int, numExchange: int) -> int:
        drank = numBottles
        empty = numBottles
        numBottles = 0 
        while numBottles >= 0:
            while empty >= numExchange:
                numBottles += 1
                empty -= numExchange
            drank += 1
            numBottles -= 1
            empty += 1
            
        return drank - 1