# Last updated: 1/16/2026, 3:12:48 PM
1class Solution:
2    def candy(self, ratings: List[int]) -> int:
3        candies = [1] * len(ratings)
4        for i in range(len(ratings) - 1):
5            if ratings[i] > ratings[i + 1]:
6                candies[i] = max(candies[i], candies[i+1] + 1)
7            elif ratings[i] < ratings[i + 1]:
8                candies[i + 1] = max(candies[i + 1], candies[i] + 1)
9        for i in range(len(ratings) - 1, 0, -1):
10            if ratings[i] > ratings[i - 1]:
11                candies[i] = max(candies[i], candies[i-1] + 1)
12            elif ratings[i] < ratings[i - 1]:
13                candies[i - 1] = max(candies[i], candies[i] + 1)
14        return sum(candies)