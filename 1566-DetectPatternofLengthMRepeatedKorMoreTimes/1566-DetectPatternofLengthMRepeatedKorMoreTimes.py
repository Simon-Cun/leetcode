# Last updated: 2/23/2026, 4:00:06 PM
1class Solution:
2    def containsPattern(self, arr: List[int], m: int, k: int) -> bool:
3        n = len(arr)
4        res = 0
5        for j in range(0, m):
6            prev = arr[j:j + m]
7            count = 1
8            for i in range(m + j, n + 1, m):
9                if prev == arr[i : i + m]:
10                    count += 1
11                else:
12                    count = 1
13                res = max(res, count)
14                prev = arr[i : i + m]
15        if res >= k:
16            return True
17        return False