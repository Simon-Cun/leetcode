# Last updated: 2/23/2026, 4:08:19 PM
1class Solution:
2    def numberOfSteps(self, num: int) -> int:
3        res = 0
4        while num != 0:
5            if num % 2 == 0:
6                num = num // 2
7            else:
8                num -= 1
9            res += 1
10        return res