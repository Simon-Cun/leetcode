// Last updated: 10/18/2026, 3:15:54 PM
1class Solution {
2public:
3    vector<vector<int>> merge(vector<vector<int>>& intervals) {
4        priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> pq(intervals.begin(), intervals.end());
5        vector<int> prev = pq.top();
6        pq.pop();
7        vector<vector<int>> ret;
8        while (!pq.empty()) {
9            vector<int> curr = pq.top();
10            pq.pop();
11            if (prev.at(1) >= curr.at(0)) {
12                prev.at(1) = max(prev.at(1), curr.at(1));
13            } else {
14                ret.push_back(prev);
15                prev = curr;
16            }
17        }
18        ret.push_back(prev);
19        return ret;
20    }
21};