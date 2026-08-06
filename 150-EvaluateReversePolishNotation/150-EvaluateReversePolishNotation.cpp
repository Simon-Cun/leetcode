// Last updated: 8/5/2026, 9:25:50 PM
1class Solution {
2public:
3    int evalRPN(vector<string>& tokens) {
4        stack<string> s;
5        int sum = 0;
6        for (auto& i : tokens) {
7            if (i == "+") {
8                int num1 = stoi(s.top());
9                s.pop();
10                int num2 = stoi(s.top());
11                s.pop();
12                s.push(to_string(num1 + num2));
13            } else if (i == "-") {
14                int num1 = stoi(s.top());
15                s.pop();
16                int num2 = stoi(s.top());
17                s.pop();
18                s.push(to_string(num2 - num1));
19            } else if (i == "*") {
20                int num1 = stoi(s.top());
21                s.pop();
22                int num2 = stoi(s.top());
23                s.pop();
24                s.push(to_string(num1 * num2));
25            } else if (i == "/") {
26                int num1 = stoi(s.top());
27                s.pop();
28                int num2 = stoi(s.top());
29                s.pop();
30                s.push(to_string(num2 / num1));
31            } else {
32                s.push(i);
33            }
34            cout << s.top() << endl;
35        }
36        return stoi(s.top());
37    }
38};