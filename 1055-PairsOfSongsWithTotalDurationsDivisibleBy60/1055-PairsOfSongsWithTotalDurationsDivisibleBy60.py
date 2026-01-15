# Last updated: 1/14/2026, 5:17:55 PM
class Solution:
    def numPairsDivisibleBy60(self, time: List[int]) -> int:
        r = [0] * 60
        res = 0
        
        for i in time:
            rem = i % 60
            com = (60 - rem) % 60
            res += r[com]
            r[rem] += 1
        
        return res
