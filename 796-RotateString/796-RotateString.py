# Last updated: 5/3/2026, 12:58:15 PM
1class Solution:
2    def rotateString(self, s: str, goal: str) -> bool:
3        count = 0
4        while count < len(s):
5            rotated = s[len(s) - count:] + s[:len(s) - count]
6            if rotated == goal: return True
7            count += 1
8        return False