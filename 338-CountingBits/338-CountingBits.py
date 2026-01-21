# Last updated: 1/20/2026, 6:43:45 PM
1class Solution:
2    def countBits(self, n: int) -> List[int]:
3        res = []
4        for i in range(n + 1):
5            bitmask = 1
6            count = 0
7            while bitmask <= i:
8                if bitmask & i != 0:
9                    count += 1
10                bitmask *= 2
11            res.append(count)
12        
13        return res
14