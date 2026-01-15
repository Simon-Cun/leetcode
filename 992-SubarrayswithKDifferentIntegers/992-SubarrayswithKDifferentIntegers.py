# Last updated: 1/14/2026, 7:12:03 PM
1from collections import OrderedDict
2class Solution:
3    def subarraysWithKDistinct(self, nums: List[int], k: int) -> int:
4        res = l = 0
5
6        od = OrderedDict()
7
8        for i, n in enumerate(nums):
9            od[n] = i
10            od.move_to_end(n)
11
12            while len(od) > k:
13                l = od.popitem(last=False)[1] + 1
14            if len(od) == k:
15                res += next(iter(od.items()))[1] - l + 1
16        return res