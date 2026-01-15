# Last updated: 1/14/2026, 5:17:56 PM
class Solution:
    def findJudge(self, n: int, trust: List[List[int]]) -> int:
        inn = [0] * (n + 1)
        out = [0] * (n + 1)

        for i, j in trust:
            inn[j] += 1
            out[i] += 1
        
        for i in range(1, n + 1):
            if out[i] == 0 and inn[i] == n - 1:
                return i
        
        return -1
