// Last updated: 10/17/2026, 9:22:10 PM
1class Solution {
2public:
3    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
4        priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> pq(intervals.begin(), intervals.end());
5        int prev = pq.top().at(1);
6        pq.pop();
7        int ret = 0;
8        while (!pq.empty()) {
9            int start = pq.top().at(0), end = pq.top().at(1);
10            pq.pop();
11            if (prev > start) {
12                ++ret;
13                prev = min(prev, end);
14            } else {
15                prev = end;
16            }
17        }
18        return ret;
19    }
20};