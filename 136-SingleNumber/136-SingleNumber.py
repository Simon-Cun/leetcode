# Last updated: 1/20/2026, 6:48:06 PM
1class Solution:
2    def singleNumber(self, nums: List[int]) -> int:
3        freq = {}
4        for i in nums:
5            freq[i] = freq.get(i, 0) + 1
6
7        for i, j in freq.items():
8            if j != 2:
9                return i
10        
11        return -1