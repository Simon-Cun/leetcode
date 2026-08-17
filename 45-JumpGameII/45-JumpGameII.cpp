// Last updated: 8/16/2026, 9:17:32 PM
1class Solution {
2public:
3    int dp(vector<int>& nums, int index, unordered_map<int, int>& visited) {
4        if (index >= nums.size() - 1) return 0;
5        if (visited.contains(index)) return visited[index];
6        int res = INT_MAX;
7        for (int i = index + 1; i <= min((int)nums.size(), index + nums.at(index)); ++i) {
8            res = min(res, dp(nums, i, visited));
9        }
10        if (res == INT_MAX) {
11            visited[index] = INT_MAX;
12            return INT_MAX;
13        }
14        visited[index] = res + 1;
15        return res + 1;
16    }
17    int jump(vector<int>& nums) {
18        unordered_map<int, int> visited;
19        int ret = dp(nums, 0, visited);
20        return ret;
21    }
22};