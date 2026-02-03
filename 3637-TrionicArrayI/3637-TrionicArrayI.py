# Last updated: 2/3/2026, 3:04:37 PM
1class Solution:
2    def canBeTypedWords(self, text: str, brokenLetters: str) -> int:
3        l = list(text.split(' '))
4        s = set(brokenLetters)
5        res = 0
6        for i in l:
7            can_add = True
8            for j in i:
9                if j in s:
10                    can_add = False
11                    break
12            if can_add:
13                res += 1
14        return res