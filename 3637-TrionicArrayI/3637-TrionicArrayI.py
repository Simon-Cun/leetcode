# Last updated: 2/3/2026, 3:10:49 PM
1class Solution:
2    def maxFrequencyElements(self, nums: List[int]) -> int:
3        freq_map = {}
4        for i in nums:
5            freq_map[i] = freq_map.get(i, 0) + 1
6        max_freq = max(freq_map.values())
7        res = 0
8        for i, j in freq_map.items():
9            if j == max_freq:
10                res += j
11        return res