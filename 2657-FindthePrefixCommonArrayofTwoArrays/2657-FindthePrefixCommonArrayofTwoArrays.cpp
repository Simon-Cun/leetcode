// Last updated: 5/20/2026, 10:00:05 AM
1class Solution {
2public:
3    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
4        int n = A.size();
5        
6        vector<int> ret;
7        unordered_set<int> s;
8        int common = 0;
9        int i = 0;
10        while (i < n) {
11            if (s.contains(A[i])) ++common;
12            else s.insert(A[i]);
13            if (s.contains(B[i])) ++common;
14            else s.insert(B[i]);
15            ret.push_back(common);
16            ++i;
17        }
18        return ret;
19    }
20};