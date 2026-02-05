# Last updated: 2/5/2026, 10:20:05 AM
1class Solution:
2    def maxProfit(self, prices: List[int]) -> int:
3        l = prices[0]
4        profit = 0
5        for r in prices:
6            profit = max(profit, r - l)
7            l = min(l, r)
8        return profit