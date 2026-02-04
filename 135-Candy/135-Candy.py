# Last updated: 2/3/2026, 6:18:20 PM
1class Solution:
2    def candy(self, ratings: List[int]) -> int:
3        n = len(ratings)
4        candies = [1] * n
5
6        for i in range(n - 1):
7            if ratings[i + 1] > ratings[i]:
8                candies[i + 1] = max(candies[i + 1], candies[i] + 1)
9        
10        for i in range(n - 1, 0, -1):
11            if ratings[i - 1] > ratings[i]:
12                candies[i - 1] = max(candies[i - 1], candies[i] + 1)
13        
14        return sum(candies)