// Last updated: 5/20/2026, 10:10:52 AM
1class Solution {
2public:
3    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
4        int n = A.size();
5        vector<int> ret;
6        unordered_set<int> s;
7        int common = 0;
8        int i = 0;
9        while (i < n) {
10            if (s.contains(A[i])) ++common;
11            else s.insert(A[i]);
12            if (s.contains(B[i])) ++common;
13            else s.insert(B[i]);
14            ret.push_back(common);
15            ++i;
16        }
17        return ret;
18    }
19};