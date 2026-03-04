# Last updated: 3/4/2026, 10:20:52 AM
1from functools import lru_cache
2class Solution:
3    @lru_cache(None)
4    def minDistance(self, word1: str, word2: str) -> int:
5        if not word1:
6            return len(word2)
7        if not word2:
8            return len(word1)
9        
10        if word1[0] == word2[0]:
11            return self.minDistance(word1[1:], word2[1:])
12        
13        insert = self.minDistance(word1, word2[1:])
14        delete = self.minDistance(word1[1:], word2)
15        replace = self.minDistance(word1[1:], word2[1:])
16
17        return 1 + min(insert, delete, replace)