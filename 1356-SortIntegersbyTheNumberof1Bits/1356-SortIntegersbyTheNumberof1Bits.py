# Last updated: 2/24/2026, 4:22:05 PM
1class Solution:
2    def sortByBits(self, arr: List[int]) -> List[int]:
3        pairs = []
4        for i in arr:
5            pairs.append([i, i.bit_count()])
6        pairs.sort(key=lambda x : x[0])
7        pairs.sort(key=lambda x : x[1])
8
9        return [row[0] for row in pairs]