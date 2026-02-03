# Last updated: 2/3/2026, 2:41:07 PM
1class Solution:
2    def sumZero(self, n: int) -> List[int]:
3        res = set()
4        for i in range(0 - n // 2, 0 + n // 2 + 1):
5            res.add(i)
6        if n % 2 == 0:
7            res.remove(0)
8        return list(res)