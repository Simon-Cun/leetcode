// Last updated: 10/17/2026, 10:25:10 PM
1class Solution {
2public:
3    int numRescueBoats(vector<int>& people, int limit) {
4        sort(people.begin(), people.end());
5        int ret = 0;
6        int l = 0, r = people.size() - 1;
7        while (l <= r) {
8            if (people.at(l) + people.at(r) <= limit) {
9                ++l;
10                --r;
11                ret++;
12            } else {
13                ++ret;
14                --r;
15            }
16        
17        }
18        return ret;
19    }
20};