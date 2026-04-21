# Last updated: 4/21/2026, 1:25:38 PM
1import heapq
2class MedianFinder:
3
4    def __init__(self):
5        self.min_pq = []
6        self.max_pq = []
7
8    def addNum(self, num: int) -> None:
9        heapq.heappush(self.max_pq, -1 * num)
10        if self.min_pq and -1 * self.max_pq[0] > self.min_pq[0]:
11            heapq.heappush(self.min_pq, -1 * heapq.heappop(self.max_pq))
12        
13        if len(self.max_pq) > len(self.min_pq) + 1:
14            heapq.heappush(self.min_pq, -1 * heapq.heappop(self.max_pq))
15        elif len(self.min_pq) > len(self.max_pq) + 1:
16            heapq.heappush(self.max_pq, -1 * heapq.heappop(self.min_pq))
17
18    def findMedian(self) -> float:
19        if len(self.min_pq) == len(self.max_pq):
20            return (self.min_pq[0] + -1 * self.max_pq[0]) / 2
21        elif (len(self.max_pq) > len(self.min_pq)):
22            return -1 * self.max_pq[0]
23        else:
24            return self.min_pq[0]
25
26
27# Your MedianFinder object will be instantiated and called as such:
28# obj = MedianFinder()
29# obj.addNum(num)
30# param_2 = obj.findMedian()