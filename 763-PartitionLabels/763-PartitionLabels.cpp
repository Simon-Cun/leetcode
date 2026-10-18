// Last updated: 10/18/2026, 2:52:07 PM
1class Solution {
2public:
3    vector<int> partitionLabels(string s) {
4        unordered_map<char, int> hash;
5        for (int i = 0; i < s.size(); ++i) hash[s.at(i)] = i;
6        int end = hash.at(s.at(0));
7        int size = 0;
8        vector<int> ret;
9        for (int i = 0; i < s.size(); ++i) {
10            if (end < hash[s.at(i)]) {
11                end = hash[s.at(i)];
12            }
13            ++size;
14            if (i == end) {
15                ret.push_back(size);
16                size = 0;
17            }
18        }
19        return ret;
20    }
21};