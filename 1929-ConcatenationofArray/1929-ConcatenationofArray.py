# Last updated: 1/20/2026, 2:38:36 PM
1class Solution:
2    def findMaxConsecutiveOnes(self, nums: List[int]) -> int:
3        count = 0
4        max_count = 0
5
6        for i in nums:
7            if i == 1:
8                count += 1
9            else:
10                count = 0
11            max_count = max(max_count, count)
12        
13        return max_count
14        