// Last updated: 1/26/2026, 1:04:20 PM
1#include <unordered_map>
2#include <string>
3#include <iostream>
4#include <cctype>
5
6using std::unordered_map;
7using std::string;
8using std::cout;
9using std::endl;
10using std::isalpha;
11using std::stoi;
12
13class Spreadsheet {
14public:
15    unordered_map<string, int> spreadsheet;
16    int numOfRows;
17    Spreadsheet(int rows) : numOfRows(rows) {}
18    
19    void setCell(string cell, int value) {
20        spreadsheet[cell] = value;
21    }
22    
23    void resetCell(string cell) {
24        spreadsheet[cell] = 0;
25    }
26    
27    int getValue(string formula) {
28        string parameter1;
29        string parameter2;
30        bool flag;
31        for (int i = 0; i < formula.length(); ++i) {
32            if (formula[i] == '=') {
33                flag = true;
34                continue;
35            } else if (formula[i] == '+') {
36                flag = false;
37                continue;
38            } else if (flag) {
39                parameter1 += formula[i];
40            } else {
41                parameter2 += formula[i];
42            }
43            
44        }
45        if (isalpha(parameter1[0]) || isalpha(parameter2[0])) {
46            if (isalpha(parameter1[0]) && isalpha(parameter2[0])) {
47                return spreadsheet[parameter1] + spreadsheet[parameter2];
48            } else if (isalpha(parameter1[0]) && !isalpha(parameter2[0])) {
49                return spreadsheet[parameter1] + stoi(parameter2);
50            } else {
51                return spreadsheet[parameter2] + stoi(parameter1);
52            }
53        } else {
54            return stoi(parameter1) + stoi(parameter2);
55        }
56    }
57};
58
59/**
60 * Your Spreadsheet object will be instantiated and called as such:
61 * Spreadsheet* obj = new Spreadsheet(rows);
62 * obj->setCell(cell,value);
63 * obj->resetCell(cell);
64 * int param_3 = obj->getValue(formula);
65 */