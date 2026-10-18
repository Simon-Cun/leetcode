// Last updated: 10/17/2026, 5:27:13 PM
1class Solution {
2public:
3    string intToRoman(int num) {
4        string ret = "";
5        while (num >= 1000) {
6            ret += 'M';
7            num -= 1000;
8        }
9        while (num >= 900) {
10            ret += "CM";
11            num -= 900;
12        }
13        while (num >= 500) {
14            ret += 'D';
15            num -= 500;
16        }
17        while (num >= 400) {
18            ret += "CD";
19            num -= 400;
20        }
21        while (num >= 100) {
22            ret += 'C';
23            num -= 100;
24        }
25        while (num >= 90) {
26            ret += "XC";
27            num -= 90;
28        }
29        cout << ret << endl;
30        while (num >= 50) {
31            ret += 'L';
32            num -= 50;
33        }
34        while (num >= 40) {
35            ret += "XL";
36            num -= 40;
37        }
38        while (num >= 10) {
39            ret += 'X';
40            num -= 10;
41        }
42        while (num >= 9) {
43            ret += "IX";
44            num -= 9;
45        }
46        while (num >= 5) {
47            ret += 'V';
48            num -= 5;
49        }
50        while (num >= 4) {
51            ret += "IV";
52            num -= 4;
53        }
54        while (num >= 1) {
55            ret += 'I';
56            num -= 1;
57        }
58        return ret;
59    }
60};