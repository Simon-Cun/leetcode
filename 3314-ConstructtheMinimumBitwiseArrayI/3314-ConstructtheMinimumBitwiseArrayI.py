# Last updated: 1/20/2026, 1:21:44 PM
1class Solution:
2    def minBitwiseArray(self, nums: List[int]) -> List[int]:
3        d = {}
4        for i in range(1000, 0, -1):
5            d[i | (i + 1)] = i
6        res = []
7        for i in nums:
8            res.append(d.get(i, -1))
9
10        return res