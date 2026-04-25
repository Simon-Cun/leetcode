// Last updated: 4/25/2026, 9:01:23 AM
1class Solution {
2public:
3    string longestCommonPrefix(vector<string>& strs) {
4        sort(strs.begin(), strs.end());
5        string prefix = "";
6        for (int i = 0; i < min(strs.at(0).size(), strs.at(strs.size() - 1).size()); ++i) {
7            if (strs.at(0).at(i) == strs.at(strs.size() - 1).at(i)) {
8                prefix += strs.at(0).at(i);
9            } else {
10                break;
11            }
12        }
13        return prefix;
14    }
15};