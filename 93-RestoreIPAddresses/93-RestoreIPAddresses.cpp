// Last updated: 11/6/2026, 2:49:53 PM
1class Solution {
2public:
3    void backtrack(string& s, string curr, vector<string>& ret, int groups, int count, int idx) {
4        if (groups == 0 && count == 0) {
5            curr.pop_back();
6            ret.push_back(curr);
7            return;
8        }
9
10        if (idx >= s.size()) return;
11
12        string str = s.substr(idx, 1);
13        int num = stoi(str);
14        backtrack(s, curr + str + '.', ret, groups - 1, count - 1, idx + 1);
15
16        if (stoi(str) != 0) {
17            if (idx + 1 < s.size()) {
18                str += s.at(idx + 1);
19                if (stoi(str) > 255) return;
20                backtrack(s, curr + str + '.', ret, groups - 1, count - 2, idx + 2);
21            }
22            if (idx + 2 < s.size()) {
23                str += s.at(idx + 2);
24                if (stoi(str) > 255) return;
25                backtrack(s, curr + str + '.', ret, groups - 1, count - 3, idx + 3);
26            }
27        }
28    }
29    vector<string> restoreIpAddresses(string s) {
30        vector<string> ret;
31        backtrack(s, "", ret, 4, s.size(), 0);
32        return ret;
33        
34    }
35};