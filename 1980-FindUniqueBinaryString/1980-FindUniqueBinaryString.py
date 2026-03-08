# Last updated: 3/7/2026, 5:54:17 PM
1class Solution:
2    def findDifferentBinaryString(self, nums: List[str]) -> str:
3        n = len(nums)
4        s = set()
5        for i in nums:
6            s.add(int(i, 2))
7        for i in range(n ** 2):
8            if i not in s:
9                return bin(i)[2:].rjust(n, "0")
10        return "1"