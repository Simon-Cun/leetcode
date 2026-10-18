// Last updated: 10/18/2026, 3:22:49 PM
1class Solution {
2public:
3    int numRescueBoats(vector<int>& people, int limit) {
4        sort(people.begin(), people.end());
5        int l = 0, r = people.size() - 1;
6        int ret = 0;
7        for (auto & i : people) cout << i << endl;
8        while (l <= r) {
9            if (people.at(l) + people.at(r) <= limit) {
10                ++ret;
11                ++l;
12                --r;
13            } else {
14                ++ret;
15                --r;
16            }
17        }
18        return ret;
19    }
20};