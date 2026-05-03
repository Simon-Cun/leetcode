// Last updated: 5/3/2026, 1:02:29 PM
1class Solution {
2public:
3    bool rotateString(string s, string goal) {
4        if (s.size() != goal.size()) return false;
5        string newString = s + s;
6        for (int i = 0; i < newString.size() - goal.size(); ++i) {
7            if (newString.substr(i, goal.size()) == goal) return true;
8        }
9        return false;
10    }
11};