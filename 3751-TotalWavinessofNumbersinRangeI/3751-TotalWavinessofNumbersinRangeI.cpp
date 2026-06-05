// Last updated: 6/5/2026, 1:06:04 PM
1class Solution {
2public:
3    int waviness(int num) {
4        string str = to_string(num);
5        if (str.size() < 3) return 0;
6        int ret = 0;
7        for (int i = 2; i < str.size(); ++i) {
8            if ((str.at(i - 2) < str.at(i - 1) && str.at(i - 1) > str.at(i)) || (str.at(i - 2) > str.at(i - 1) and str.at(i - 1) < str.at(i))) ++ret;
9        }
10        return ret;
11    }
12    int totalWaviness(int num1, int num2) {
13        int ret = 0;
14        for (int i = num1; i <= num2; ++i) {
15            ret += waviness(i);
16        }
17        return ret;
18    }
19};