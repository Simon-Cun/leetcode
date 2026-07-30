// Last updated: 7/29/2026, 7:16:54 PM
1class Solution {
2public:
3    string smallestPalindrome(string s) {
4        if (s.size() == 1) return s;
5        string m = "";
6        if (s.size() % 2) m = s.at(s.size() / 2);
7        vector<int> charMap(26, 0);
8        for (int i = 0; i < s.size() / 2; ++i) ++charMap.at(s.at(i) - 'a');
9        string half1 = "";
10        for (int i = 0; i < charMap.size(); ++i) {
11            if (charMap.at(i) != 0) for (int j = 0; j < charMap.at(i); ++j) half1 += (i + 'a');
12        }
13        string half2 = half1;
14        reverse(half2.begin(), half2.end());
15        return (half1 + m + half2);
16    }
17};