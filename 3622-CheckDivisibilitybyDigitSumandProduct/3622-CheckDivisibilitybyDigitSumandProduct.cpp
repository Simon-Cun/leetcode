// Last updated: 8/22/2026, 10:53:59 AM
1class Solution {
2public:
3    bool checkDivisibility(int n) {
4        int saved = n;
5        int sum = 0;
6        int prod = 1;
7        while (n != 0) {
8            sum += n % 10;
9            prod *= n % 10;
10            n /= 10;
11        }
12        return saved % (sum + prod) == 0;
13    }
14};