# Last updated: 1/15/2026, 9:32:11 AM
1class Solution:
2    def twoSum(self, numbers: List[int], target: int) -> List[int]:
3        l, r = 0, len(numbers) - 1
4
5        while l < r:
6            s = numbers[l] + numbers[r]
7            if s < target:
8                l += 1
9            elif s > target:
10                r -= 1
11            else:
12                return [l + 1, r + 1] 
13        
14        return []