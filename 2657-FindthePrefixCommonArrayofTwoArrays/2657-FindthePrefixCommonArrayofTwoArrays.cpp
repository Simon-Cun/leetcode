// Last updated: 5/20/2026, 10:13:47 AM
1class Solution {
2public:
3    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
4        int n = A.size();
5        vector<int> ret;
6        unordered_set<int> s;
7        int common = 0;
8        for (int i = 0; i < n; ++i) {
9            if (s.contains(A[i])) ++common;
10            else s.insert(A[i]);
11            if (s.contains(B[i])) ++common;
12            else s.insert(B[i]);
13            ret.push_back(common);
14        }
15        return ret;
16    }
17};