// Last updated: 10/17/2026, 8:34:24 PM
1class Solution {
2public:
3    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
4        if (accumulate(gas.begin(), gas.end(), 0) < accumulate(cost.begin(), cost.end(), 0)) return -1;
5        int start = 0;
6        int gasTank = 0;
7        for (int i = 0; i < gas.size(); ++i) {
8            gasTank += gas.at(i) - cost.at(i);
9            if (gasTank < 0) {
10                start = i + 1;
11                gasTank = 0;
12            }
13        }
14        return start;
15
16    }
17};