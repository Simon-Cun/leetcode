# Last updated: 1/16/2026, 3:15:36 PM
1class Solution:
2    def candy(self, ratings: List[int]) -> int:
3        n = len(ratings)
4        candies = [1] * n
5
6        for i in range(n - 1):
7            if ratings[i] > ratings[i + 1]:
8                candies[i] = max(candies[i], candies[i+1] + 1)
9            elif ratings[i] < ratings[i + 1]:
10                candies[i + 1] = max(candies[i + 1], candies[i] + 1)
11
12        for i in range(n - 1, 0, -1):
13            if ratings[i] > ratings[i - 1]:
14                candies[i] = max(candies[i], candies[i-1] + 1)
15            elif ratings[i] < ratings[i - 1]:
16                candies[i - 1] = max(candies[i], candies[i] + 1)
17
18        return sum(candies)