// Last updated: 7/26/2026, 10:29:04 AM
1class Solution {
2public:
3    int trap(vector<int>& height) {
4        int l = 0, r = height.size() - 1;
5        int lMax = height.at(l), rMax = height.at(r);
6        int res = 0;
7        while (l < r) {
8            if (lMax < rMax) {
9                ++l;
10                lMax = max(lMax, height.at(l));
11                res += lMax - height.at(l);
12            } else {
13                --r;
14                rMax = max(rMax, height.at(r));
15                res += rMax - height.at(r);
16            }
17        }
18        return res;
19    }
20};