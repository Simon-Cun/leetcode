# Last updated: 1/14/2026, 5:18:03 PM
class Solution:
    def subarraySum(self, nums: List[int], k: int) -> int:
        d = {0 : 1}
        prefix = 0
        res = 0

        for i in nums:
            prefix += i

            res += d.get(prefix - k, 0)

            d[prefix] = d.get(prefix, 0) + 1

        return res