# Last updated: 1/16/2026, 11:09:04 AM
1class Solution:
2    def reverse(self, x: int) -> int:
3        res = ""
4        if str(x)[0] == '-':
5                res += '-'
6        for i in reversed(str(x)):
7            if i != '-':
8                res += i
9        ans = int(res)
10        if not (-2 ** 31 <= ans <= 2 ** 31 - 1):
11            return 0
12        return ans
13        