# Last updated: 1/17/2026, 12:06:21 PM
1class Solution:
2    def candy(self, ratings: List[int]) -> int:
3        n = len(ratings)
4        candies = [1] * n
5
6        for i in range(n - 1):
7            if ratings[i] < ratings[i + 1]:
8                candies[i + 1] = max(candies[i + 1], candies[i] + 1)
9            elif ratings[i] > ratings[i + 1]:
10                candies[i] = max(candies[i], candies[i + 1] + 1)
11        for i in range(n - 1, 0, -1):
12            if ratings[i] < ratings[i - 1]:
13                candies[i - 1] = max(candies[i - 1], candies[i] + 1)
14            elif ratings[i] > ratings[i - 1]:
15                candies[i] = max(candies[i], candies[i - 1] + 1)
16        
17        return sum(candies)