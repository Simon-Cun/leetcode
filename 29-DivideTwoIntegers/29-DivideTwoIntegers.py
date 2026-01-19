# Last updated: 1/18/2026, 8:21:29 PM
1class Solution:
2    def romanToInt(self, s: str) -> int:
3        dictionary = { 'I' : 1, 'V' : 5, 'X' : 10, 'L' : 50, 'C' : 100, 'D' : 500, 'M' : 1000}
4        summ = 0
5        for i in range(1, len(s)):
6            if dictionary[s[i - 1]] >= dictionary[s[i]]:
7                summ += dictionary[s[i - 1]]
8            else:
9                summ -= dictionary[s[i - 1]]
10        summ += dictionary[s[len(s) - 1]]
11        return summ