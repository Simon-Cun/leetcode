// Last updated: 5/3/2026, 1:04:05 PM
1class Solution {
2public:
3    bool rotateString(string s, string goal) {
4        return (s.size() == goal.size()) and (s + s).contains(goal);
5    }
6};