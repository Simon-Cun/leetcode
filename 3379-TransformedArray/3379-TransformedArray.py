# Last updated: 2/5/2026, 2:55:57 PM
1class Solution:
2    def minimumAbsDifference(self, arr: List[int]) -> List[List[int]]:
3        arr.sort()
4        res = []
5        smallest_diff = float('inf')
6        for i in range(len(arr) - 1):
7            res.append([arr[i], arr[i + 1]])
8        for i in range(len(res)) :
9            smallest_diff = min(smallest_diff, res[i][1] - res[i][0])
10        for i in range(len(res) - 1, -1, -1):
11            if res[i][1] - res[i][0] != smallest_diff:
12                res.pop(i)
13        return res