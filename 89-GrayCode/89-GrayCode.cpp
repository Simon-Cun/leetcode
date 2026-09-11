// Last updated: 9/11/2026, 4:10:42 PM
1class Solution {
2public:
3    vector<int> backtrack(int n, int m, vector<int>& curr, unordered_set<int>& v) {
4        curr.push_back(m);
5        if (curr.size() == pow(2, n)) return curr;
6        vector<int> ret;
7        int bitmask = 1;
8        while (bitmask < 1 << n) {
9            if (v.contains(m ^ bitmask)) {
10                bitmask *= 2;
11                continue;
12            }
13            m ^= bitmask;
14            v.insert(m);
15            ret = backtrack(n, m, curr, v);
16            v.erase(m);
17            m ^= bitmask;
18            if (curr.size() == pow(2, n)) return ret;
19        }
20        curr.pop_back();
21        return ret;
22    }
23    vector<int> grayCode(int n) {
24        vector<int> ret;
25        unordered_set<int> v;
26        v.insert(0);
27        return backtrack(n, 0, ret, v);
28    }
29};