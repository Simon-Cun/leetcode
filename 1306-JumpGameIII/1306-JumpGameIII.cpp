// Last updated: 5/17/2026, 9:00:49 AM
1class Solution {
2public:
3    bool canReach(vector<int>& arr, int start) {
4        unordered_set<int> visited;
5        return canReachHelp(arr, start, visited);
6    }
7    bool canReachHelp(vector<int>& arr, int start, unordered_set<int>& visited) {
8        if (start < 0 or start > (arr.size() - 1) or visited.contains(start)) return false;
9        if (arr[start] == 0) return true;
10        visited.insert(start);
11        return canReachHelp(arr, start - arr.at(start), visited) + canReachHelp(arr, start + arr.at(start), visited);
12    }
13};