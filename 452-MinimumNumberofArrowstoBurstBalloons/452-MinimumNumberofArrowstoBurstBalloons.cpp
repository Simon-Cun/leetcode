// Last updated: 10/18/2026, 3:36:29 PM
1class Solution {
2public:
3    int findMinArrowShots(vector<vector<int>>& points) {
4        priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> pq(points.begin(), points.end());
5        vector<int> prev = pq.top();
6        pq.pop();
7        int ret = 1;
8        while (!pq.empty()) {
9            vector<int> curr = pq.top();
10            pq.pop();
11            if (prev.at(1) >= curr.at(0)) {
12                prev.at(1) = min(prev.at(1), curr.at(1));
13            } else {
14                prev = curr;
15                ++ret;
16            }
17        }
18        return ret;
19    }
20};