# Last updated: 3/11/2026, 11:50:17 AM
1class Solution:
2    def bitwiseComplement(self, n: int) -> int:
3        s = ""
4        for i in bin(n)[2:]:
5            if i == '1':
6                s += '0'
7            else:
8                s += '1'
9        return int(s, 2)