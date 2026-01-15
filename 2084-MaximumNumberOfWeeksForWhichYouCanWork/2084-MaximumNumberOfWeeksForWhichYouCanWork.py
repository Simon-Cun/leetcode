# Last updated: 1/14/2026, 5:17:48 PM
class Solution:
    def numberOfWeeks(self, milestones: List[int]) -> int:
        s = 0
        m = 0
        for i in range(len(milestones)):
            s += milestones[i]
            m = max(m, milestones[i])

        if m > s - m:
            return 2 * (s - m) + 1
        
        return s