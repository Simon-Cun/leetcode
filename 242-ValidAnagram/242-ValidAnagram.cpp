// Last updated: 10/17/2026, 11:10:11 PM
1class Solution {
2public:
3    bool isAnagram(string s, string t) {
4        vector<int> charMapS(26, 0);
5        for (auto& i : s) charMapS[i - 'a']++;
6        vector<int> charMapT(26, 0);
7        for (auto& i : t) charMapT[i - 'a']++;
8        return charMapS == charMapT;
9    }
10};