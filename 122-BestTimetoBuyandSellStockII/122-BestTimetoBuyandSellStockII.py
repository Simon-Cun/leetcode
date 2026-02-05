# Last updated: 2/5/2026, 10:20:56 AM
1class Solution:
2    def maxProfit(self, prices: List[int]) -> int:
3        l = prices[0]
4        profit = 0
5        for r in prices:
6            if r - l > 0:
7                profit += r - l
8                l = r
9            l = min(l, r)
10        return profit