// Last updated: 10/18/2026, 3:22:56 PM
1class Solution {
2public:
3    int numRescueBoats(vector<int>& people, int limit) {
4        sort(people.begin(), people.end());
5        int l = 0, r = people.size() - 1;
6        int ret = 0;
7        while (l <= r) {
8            if (people.at(l) + people.at(r) <= limit) {
9                ++ret;
10                ++l;
11                --r;
12            } else {
13                ++ret;
14                --r;
15            }
16        }
17        return ret;
18    }
19};