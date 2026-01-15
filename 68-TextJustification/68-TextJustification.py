# Last updated: 1/14/2026, 5:18:33 PM
class Solution:
    def fullJustify(self, words: List[str], maxWidth: int) -> List[str]:
        res, curr, n = [], [], 0

        for w in words:
            if n + len(w) + len(curr) > maxWidth:
                for i in range(maxWidth - n):
                    curr[i % (len(curr) - 1 or 1)] += ' '
                res.append(''.join(curr))
                curr, n = [], 0
            curr.append(w)
            n += len(w)
        
        return res + [' '.join(curr).ljust(maxWidth)]