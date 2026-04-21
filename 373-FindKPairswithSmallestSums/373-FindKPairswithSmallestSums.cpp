// Last updated: 4/21/2026, 4:06:07 PM
1class Solution {
2public:
3    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
4        priority_queue<tuple<int,int,int>, vector<tuple<int,int,int>>, greater<tuple<int,int,int>>> pq;
5        vector<vector<int>> ret;
6        for (int i = 0; i < nums1.size(); ++i) {
7            pq.push({nums1.at(i) + nums2.at(0), i, 0});
8        }
9        while (ret.size() < k and !pq.empty()) {
10            auto [sum, idx1, idx2] = pq.top();
11            pq.pop();
12            ret.push_back({nums1.at(idx1), nums2.at(idx2)});
13            if (idx2 + 1 < nums2.size()) {
14                pq.push({nums1[idx1] + nums2[idx2+1], idx1, idx2+1});
15            }
16        }
17        return ret;
18    }
19};