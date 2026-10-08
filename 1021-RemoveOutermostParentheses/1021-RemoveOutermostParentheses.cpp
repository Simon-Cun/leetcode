// Last updated: 10/8/2026, 9:15:58 AM
1class Solution {
2public:
3    string removeOuterParentheses(string s) {
4        stack<int> st;
5        string ret = "";
6        for (int i = 0; i < s.size(); ++i) {
7            int lastPop = -1;
8            if (i == 0) {
9                st.push(i);
10            } else if (s.at(i) == ')' && s.at(st.top()) == '(') {
11                lastPop = st.top();
12                st.pop();
13            } else {
14                st.push(i);
15            }
16            if (st.empty()) {
17                ret += s.substr(lastPop + 1, i - lastPop - 1);
18            }
19        }
20        return ret;
21    }
22};