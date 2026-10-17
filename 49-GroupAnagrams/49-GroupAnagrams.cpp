// Last updated: 10/17/2026, 4:04:20 PM
1class Solution {
2public:
3    vector<vector<string>> groupAnagrams(vector<string>& strs) {
4        unordered_map<string, vector<string>> groups;
5        for (auto& i : strs) {
6            vector<int> charMap(26, 0);
7            for (auto& j : i) {
8                ++charMap.at(j - 'a');
9            }
10            string key = "";
11            for (auto& i : charMap) key += '|' + i;
12            groups[key].push_back(i);
13        }
14        vector<vector<string>> ret;
15        for (auto& i : groups) ret.push_back(i.second);
16        return ret;
17    }
18};