# Last updated: 2/23/2026, 4:05:40 PM
1class Solution:
2    def maximum69Number (self, num: int) -> int:
3        l = []
4        flag = True
5        for i in str(num):
6            if int(i) < 9 and flag:
7                flag = False
8                l.append(9)
9            else:
10                l.append(i)
11        return int(''.join(map(str, l)))