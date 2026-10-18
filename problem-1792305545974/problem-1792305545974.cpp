// Last updated: 10/17/2026, 11:39:05 PM
1class Solution {
2public:
3    int lengthOfLongestSubstring(string s) {
4        unordered_map<char, int> hash;
5        int l = 0;
6        int ret = 0;
7        for (int i = 0; i < s.size(); ++i) {
8            hash[s.at(i)]++;
9            while (hash[s.at(i)] > 1) {
10                hash[s.at(l)]--;
11                ++l;
12            }
13            ret = max(ret, i - l + 1);
14        }
15        return ret;
16    }
17};