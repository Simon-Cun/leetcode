// Last updated: 5/11/2026, 6:54:43 PM
1class Solution {
2public:
3    int minimumEffort(vector<vector<int>>& tasks) {
4        vector<tuple<int, int, int>> arr;
5        for (auto& i : tasks) arr.push_back({i[1] - i[0], i[0], i[1]});
6        sort(arr.begin(), arr.end(), greater<>());
7
8        int ret = 0, curr = 0;
9        for (auto& [a, b, c] : arr) {
10            if (curr < c) {
11                ret += c - curr;
12                curr = c;
13            }
14            curr -= b;
15        }
16        return ret;
17    }
18};