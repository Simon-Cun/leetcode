# Last updated: 3/4/2026, 2:41:06 PM
1class Solution:
2    def coinChange(self, coins: List[int], amount: int) -> int:
3        if amount < 1:
4            return 0
5
6        dp = [float('inf')] * (amount + 1)
7        dp[0] = 0
8
9        for i in range(1, amount + 1):
10            for coin in coins:
11                if coin <= i:
12                    dp[i] = min(dp[i], dp[i - coin] + 1)
13        
14        if dp[amount] == float('inf'):
15            return -1
16        else:
17            return dp[amount]