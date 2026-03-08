# Last updated: 3/7/2026, 5:53:53 PM
1class Solution:
2    def findDifferentBinaryString(self, nums: List[str]) -> str:
3        s = set()
4        for i in nums:
5            s.add(int(i, 2))
6        for i in range(len(nums) ** 2):
7            print(i, s)
8            if i not in s:
9                print(i)
10                return bin(i)[2:].rjust(len(nums[0]), "0")
11        return "1"