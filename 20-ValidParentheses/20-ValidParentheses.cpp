// Last updated: 10/17/2026, 11:14:18 PM
1class Solution {
2public:
3    bool isValid(string s) {
4        stack<int> st;
5        for (auto& i : s) {
6            if (i == '(' || i == '{' || i == '[') {
7                st.push(i);
8            } else {
9                if (!st.empty() && (st.top() == '(' && i == ')' || st.top() == '[' && i == ']' || st.top() == '{' && i == '}')) {
10                    st.pop();
11                } else {
12                    return false;
13                }
14            }
15        }
16        return st.empty();
17    }
18};