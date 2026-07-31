// Last updated: 7/30/2026, 11:38:36 PM
1class Solution {
2public:
3    bool isMatch(string s, string p) {
4        regex pattern(p);
5        return regex_match(s, pattern);
6    }
7};