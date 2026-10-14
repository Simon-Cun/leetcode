// Last updated: 10/13/2026, 7:37:15 PM
1class Solution {
2public:
3    string maxSumOfSquares(int num, int sum) {
4        if (sum > num * 9) {
5            return "";
6        }
7        string res = "";
8        for (int i = 0; i < num; ++i) {
9            int digit = min(9, sum);
10            res += to_string(digit);
11            sum -= digit;
12        }
13        return res;
14    }
15};