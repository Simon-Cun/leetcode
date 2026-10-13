// Last updated: 10/13/2026, 4:50:22 PM
1class Solution {
2public:
3    string longestCommonPrefix(vector<string>& strs) {
4        sort(strs.begin(), strs.end());
5        string ret = "";
6        for (int i = 0; i < min(strs.at(0).size(), strs.at(strs.size() - 1).size()); ++i) {
7            if (strs.at(0).at(i) == strs.at(strs.size() - 1).at(i)) ret += strs.at(0).at(i);
8            else break;
9        } 
10        return ret;
11    }
12};