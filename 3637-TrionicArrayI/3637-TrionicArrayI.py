# Last updated: 2/3/2026, 2:49:38 PM
1class Solution:
2    def getNoZeroIntegers(self, n: int) -> List[int]:
3        for i in range(1, n):
4            if '0' not in str(n - i) and '0' not in str(i):
5                return [i, n - i]
6        