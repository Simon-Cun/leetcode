# Last updated: 1/14/2026, 5:18:21 PM
class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        min = 0
        price = 0
        for i in range(len(prices)):
            if prices[min] > prices[i]:
                min = i
            if prices[i] - prices[min] > price:
                price = prices[i] - prices[min]
            
        return price