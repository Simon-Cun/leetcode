// Last updated: 7/29/2026, 6:54:40 PM
1class Solution {
2public:
3    int minimumPushes(string word) {
4        vector<int> charMap(26, 0);
5        for (auto& i : word) ++charMap.at(i - 'a');
6        sort(charMap.begin(), charMap.end(), greater());
7        int summation = 1;
8        int res = 0;
9        int count = 0;
10        for (auto& i : charMap) {
11            cout << summation << ' ' << i << ' ' << res << endl;
12            if (count > 0 && count % 8 == 0) ++summation;
13            res += summation * i;
14            ++count;
15        }
16        return res;
17    }
18};