# Last updated: 1/31/2026, 11:46:45 PM
1class Solution:
2    def numPairsDivisibleBy60(self, time: List[int]) -> int:
3        freq_arr = [0] * 60
4        res = 0
5        for i in time:
6            rem = i % 60
7            comp = (60 - rem) % 60
8            res += freq_arr[comp]
9            freq_arr[rem] += 1
10        return res
11