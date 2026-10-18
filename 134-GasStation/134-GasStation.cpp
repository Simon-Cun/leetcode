// Last updated: 10/18/2026, 2:47:52 PM
1class Solution {
2public:
3    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
4        if (accumulate(gas.begin(), gas.end(), 0) < accumulate(cost.begin(), cost.end(), 0)) return -1;
5        int start = 0;
6        int have = 0;
7        for (int i = 0; i < gas.size(); ++i) {
8            have += gas.at(i) - cost.at(i)
9;            if (have < 0) {
10                start = i + 1;
11                have = 0;
12            }
13        }
14        return start;
15    }
16};