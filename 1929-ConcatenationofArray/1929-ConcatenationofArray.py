# Last updated: 1/20/2026, 2:32:05 PM
1class Solution:
2    def shuffle(self, nums: List[int], n: int) -> List[int]:
3        res = []
4        start = 0
5        while len(res) != len(nums):
6            for i in nums[start::n]:
7                res.append(i)
8            start += 1
9        
10        return res
11
12