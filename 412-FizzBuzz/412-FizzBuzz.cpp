// Last updated: 10/15/2026, 10:07:59 AM
1class Solution {
2public:
3    vector<string> fizzBuzz(int n) {
4        vector<string> ret;
5        for (int i = 1; i <= n; ++i) {
6            if (i % 3 == 0 && i % 5 == 0) {
7                ret.push_back("FizzBuzz");
8            } else if (i % 3 == 0) {
9                ret.push_back("Fizz");
10            } else if (i % 5 == 0) {
11                ret.push_back("Buzz");
12            } else {
13                ret.push_back(to_string(i));
14            }
15        }
16        return ret;
17    }
18};