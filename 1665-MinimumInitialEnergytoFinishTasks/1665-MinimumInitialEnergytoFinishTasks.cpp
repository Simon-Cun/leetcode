// Last updated: 5/11/2026, 6:47:01 PM
1class Solution {
2public:
3    int minimumEffort(vector<vector<int>>& tasks) {
4        vector<tuple<int, int, int>> arr;
5        for (auto& i : tasks) {
6            arr.push_back({i[1] - i[0], i[0], i[1]});
7        }
8        sort(arr.begin(), arr.end(), greater<>());
9        int ret = 0, curr = 0;
10        for (auto& [a, b, c] : arr) {
11            if (curr < c) {
12                ret += c - curr;
13                curr = c;
14            }
15            curr -= b;
16        }
17        return ret;
18    }
19};