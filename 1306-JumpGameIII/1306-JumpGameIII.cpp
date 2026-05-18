// Last updated: 5/18/2026, 4:07:11 PM
1class Solution {
2    bool helper(vector<int>& arr, int idx, vector<bool>& visited) {
3        if (idx < 0 || idx >= arr.size()) return false;
4        if (visited[idx]) return false;
5        if (arr[idx] == 0) return true;
6
7        visited[idx] = true;
8
9        bool right = helper(arr, idx + arr[idx], visited);
10        bool left = helper(arr, idx - arr[idx], visited);
11
12        if (right || left) return true;
13
14        return false;
15    }
16public:
17    bool canReach(vector<int>& arr, int start) {
18        vector<bool> visited(arr.size(), false);
19        return helper(arr, start, visited);
20    }
21};