// Last updated: 7/25/2026, 8:28:06 PM
1class Solution {
2public:
3    int maxProduct(int n) {
4        int curr = 0, prev = 0;
5        while (n) {
6            int rem = n % 10;
7            n /= 10;
8            if (curr < rem) {
9                prev = curr;
10                curr = rem;
11            } else if (prev < rem){
12                prev = rem;
13            }
14        }
15        return prev * curr;
16    }
17};