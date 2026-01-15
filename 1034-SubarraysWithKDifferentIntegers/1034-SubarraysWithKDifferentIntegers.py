# Last updated: 1/14/2026, 5:17:57 PM
from collections import OrderedDict
class Solution:
    def subarraysWithKDistinct(self, nums: List[int], k: int) -> int:
        res = l = 0

        od = OrderedDict()
        for i, n in enumerate(nums):
            od[n] = i
            od.move_to_end(n)
            while len(od) > k:
                l = od.popitem(last=False)[1] + 1
            if len(od) == k:
                res += next(iter(od.items()))[1] - l + 1
        return res

