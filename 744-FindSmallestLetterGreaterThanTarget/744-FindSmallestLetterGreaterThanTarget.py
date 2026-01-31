# Last updated: 1/31/2026, 11:31:53 AM
1class Solution:
2    def nextGreatestLetter(self, letters: List[str], target: str) -> str:
3        res = max(letters)
4        for i in letters:
5            if target < i < res:
6                res = i
7        if res > target:
8            return res
9        else:
10            return letters[0]