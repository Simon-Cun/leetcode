# Last updated: 1/19/2026, 10:42:54 AM
1class Solution:
2    def scheduleCourse(self, courses: List[List[int]]) -> int:
3        courses.sort(key=lambda x : x[1])
4        heap = []
5        time = 0
6
7        for duration, end in courses:
8            time += duration
9            heapq.heappush(heap, -duration)
10            if time > end:
11                time += heapq.heappop(heap)
12        
13        return len(heap)