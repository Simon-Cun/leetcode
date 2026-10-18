// Last updated: 10/18/2026, 3:11:15 PM
1class Solution {
2public:
3    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
4        priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> pq(intervals.begin(), intervals.end());
5        vector<int> prev = pq.top();
6        pq.pop();
7        int ret = 0;
8        while (!pq.empty()) {
9            vector<int> curr = pq.top();
10            pq.pop();
11            if (prev.at(1) > curr.at(0)) {
12                ++ret;
13                prev.at(1) = min(prev.at(1), curr.at(1));
14            } else {
15                prev = curr;
16            }
17        }
18        return ret;
19    }   
20};