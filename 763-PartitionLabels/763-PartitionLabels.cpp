// Last updated: 10/17/2026, 8:55:02 PM
1class Solution {
2public:
3    vector<int> partitionLabels(string s) {
4        unordered_map<char, int> hash;
5        for (int i = 0; i < s.size(); ++i) {
6            hash[s.at(i)] = i;
7        }
8        int end = 0;
9        int size = 0;
10        vector<int> ret;
11        for (int i = 0; i < s.size(); ++i) {
12            ++size;
13            if (hash[s.at(i)] > end) {
14                end = hash[s.at(i)];
15            }
16            if (i == end) {
17                ret.push_back(size);
18                size = 0;
19            }
20        }
21        return ret;
22    }
23};