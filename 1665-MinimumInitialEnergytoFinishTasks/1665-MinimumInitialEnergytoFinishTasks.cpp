// Last updated: 5/11/2026, 9:58:33 PM
1class Solution {
2public:
3    int minimumEffort(vector<vector<int>>& tasks) {
4        sort(tasks.begin(), tasks.end(), [](const vector<int>&  a, const vector<int>& b) { return (a[1] - a[0]) > (b[1] - b[0]); });
5        
6        int ret = 0, curr = 0;
7        for (auto& i : tasks) {
8            if (curr < i[1]) {
9                ret += i[1] - curr;
10                curr = i[1];
11            }
12            curr -= i[0];
13        }
14        return ret;
15    }
16};