// Last updated: 9/8/2026, 12:26:44 PM
1class Solution {
2public:
3    vector<int> backtrack(int n, int m, unordered_set<int>& visited, vector<int>& ret) {
4        ret.push_back(m);
5        if (ret.size() == pow(2, n)) {
6            return ret;
7        }
8        
9        vector<int> res;
10        int bitmask = 1;
11        while (bitmask < (1 << n)) {
12            if (visited.contains(m ^ bitmask)) {
13                bitmask *= 2;
14                continue;
15            }
16            m ^= bitmask;
17            visited.insert(m);
18            res = backtrack(n, m, visited, ret);
19            visited.erase(m);
20            m ^= bitmask;
21            if (res.size() == pow(2, n)) {
22                return res;
23            }
24            bitmask *= 2;
25        }
26        return res;
27    }
28    vector<int> grayCode(int n) {
29        vector<int> ret;
30        unordered_set<int> v;
31        v.insert(0);
32        return backtrack(n, 0, v, ret);
33    }
34};