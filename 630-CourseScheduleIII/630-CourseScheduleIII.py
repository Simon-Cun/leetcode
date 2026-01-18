# Last updated: 1/18/2026, 11:21:27 AM
1class Solution:
2    def scheduleCourse(self, courses: List[List[int]]) -> int:
3        courses.sort(key=lambda x : x[1])
4        heap = []
5        day = 0
6
7        for duration, end in courses:
8            heapq.heappush(heap, -duration)
9            day += duration
10
11            if day > end:
12                day += heapq.heappop(heap)
13            
14        return len(heap)