// Last updated: 8/16/2026, 9:16:48 PM
1class Solution {
2public:
3    int dp(vector<int>& nums, int index, unordered_map<int, int>& visited) {
4        if (index >= nums.size() - 1) return 0;
5        if (visited.contains(index)) return visited[index];
6        int res = INT_MAX;
7        for (int i = index + 1; i <= min((int)nums.size(), index + nums.at(index)); ++i) {
8            res = min(res, dp(nums, i, visited));
9        }
10        if (res == INT_MAX) return INT_MAX;
11        visited[index] = res + 1;
12        return res + 1;
13    }
14    int jump(vector<int>& nums) {
15        unordered_map<int, int> visited;
16        int ret = dp(nums, 0, visited);
17        return ret;
18    }
19};