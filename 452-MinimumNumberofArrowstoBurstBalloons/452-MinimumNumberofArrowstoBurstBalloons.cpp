// Last updated: 10/17/2026, 11:01:34 PM
1class Solution {
2public:
3    int findMinArrowShots(vector<vector<int>>& points) {
4        priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> pq(points.begin(), points.end());
5        int ret = 1;
6        vector<int> prev = pq.top();
7        pq.pop();
8        while (!pq.empty()) {
9            vector<int> curr = pq.top();
10            pq.pop();
11            if (prev.at(1) >= curr.at(0)) {
12                prev.at(0) = curr.at(0);
13                prev.at(1) = min(prev.at(1), curr.at(1));
14            } else {
15                ++ret;
16                prev = curr;
17            }
18        }
19        return ret;
20    }
21};