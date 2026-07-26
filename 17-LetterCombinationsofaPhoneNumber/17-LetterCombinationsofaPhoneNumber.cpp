// Last updated: 7/25/2026, 6:38:33 PM
1class Solution {
2public:
3    void allPossibleCombinations(string& digits, vector<string>& res, unordered_set<int> visited, string str, unordered_map<int, vector<string>>& alpha, int index) {
4        if (index == digits.size()) {
5            res.push_back(str);
6            return;
7        }
8        for (auto& i : alpha.at(digits.at(index) - '0')) {
9            allPossibleCombinations(digits, res, visited, str + i, alpha, index + 1);
10        }
11
12    }
13    vector<string> letterCombinations(string digits) {
14        vector<string> res;
15        if (digits.empty()) return res;
16        unordered_map<int, vector<string>> alpha = {
17        {2, {"a", "b", "c"}},
18        {3, {"d", "e", "f"}},
19        {4, {"g", "h", "i"}},
20        {5, {"j", "k", "l"}},
21        {6, {"m", "n", "o"}},
22        {7, {"p", "q", "r", "s"}},
23        {8, {"t", "u", "v"}},
24        {9, {"w", "x", "y", "z"}}
25        };
26        allPossibleCombinations(digits, res, unordered_set<int>(), string(), alpha, 0);
27        return res;
28
29    }
30    
31};