// Last updated: 7/24/2026, 2:32:31 PM
1class Solution {
2public:
3    vector<int> arrayRankTransform(vector<int>& arr) {
4        unordered_set<int> tmp;
5        for (auto& i : arr) tmp.insert(i);
6        vector<int> rankings;
7        for (auto& i : tmp) rankings.push_back(i);
8        sort(rankings.begin(), rankings.end());
9        unordered_map<int, int> hash;
10        for (int i = 0; i < rankings.size(); ++i) {
11            hash[rankings.at(i)] = i + 1;
12        }
13        for (auto& i : hash) cout << i.first << ' ' << i.second << endl;
14        vector<int> res;
15        for (auto& i : arr) {
16            res.push_back(hash[i]);
17        }
18        return res;
19    }
20};