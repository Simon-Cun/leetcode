// Last updated: 5/26/2026, 12:16:50 PM
1class Solution {
2public:
3    int numberOfSpecialChars(string word) {
4        unordered_set<char> lower;
5        unordered_set<char> upper;
6        for (int i = 0; i < word.size(); ++i) {
7            if (isupper(word.at(i))) {
8                upper.insert(word.at(i));
9            } else {
10                lower.insert(word.at(i));
11            }
12        }
13        int ret = 0;
14        int bitmask = 32;
15        for (auto& i : lower) {
16            if (upper.contains((char)(i ^ bitmask))) {
17                ++ret;
18            }
19        }
20        return ret;
21    }
22};