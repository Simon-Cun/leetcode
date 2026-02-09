# Last updated: 2/8/2026, 4:17:51 PM
1class Solution:
2    def maximumUnits(self, boxTypes: List[List[int]], truckSize: int) -> int:
3        boxTypes.sort(reverse=True, key=lambda x : x[1])
4        res = 0
5        for i, j in boxTypes:
6            while i > 0 and truckSize > 0:
7                res += j
8                i -= 1
9                truckSize -= 1
10        return res