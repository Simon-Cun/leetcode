# Last updated: 1/14/2026, 5:27:29 PM
1from collections import OrderedDict
2class Solution:
3    def subarraysWithKDistinct(self, nums: List[int], k: int) -> int:
4        res = l = 0
5        
6        od = OrderedDict()
7        for i, n in enumerate(nums):
8            od[n] = i
9            od.move_to_end(n)
10            while len(od) > k:
11                l = od.popitem(last=False)[1] + 1
12            if len(od) == k:
13                res += next(iter(od.items()))[1] - l + 1
14
15        return res