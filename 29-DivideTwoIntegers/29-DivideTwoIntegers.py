# Last updated: 1/18/2026, 8:20:01 PM
1class Solution:
2    def intToRoman(self, num: int) -> str:
3        roman = ""
4        while num > 0:
5            if num >= 1000:
6                num -= 1000
7                roman += "M"
8            elif num >= 900:
9                num -= 900
10                roman += "CM"
11            elif num >= 500:
12                num -= 500
13                roman += "D"
14            elif num >= 400:
15                num -= 400
16                roman += "CD"
17            elif num >= 100:
18                num -= 100
19                roman += "C"
20            elif num >= 90:
21                num -= 90
22                roman += "XC"
23            elif num >= 50:
24                num -= 50
25                roman += "L"
26            elif num >= 40:
27                num -= 40
28                roman += "XL"
29            elif num >= 10:
30                num -= 10
31                roman += "X"
32            elif num >= 9:
33                num -= 9
34                roman += "IX"
35            elif num >= 5:
36                num -= 5
37                roman += "V"
38            elif num >= 4:
39                num -= 4
40                roman += "IV"
41            else:
42                num -= 1
43                roman += "I"
44        return roman
45