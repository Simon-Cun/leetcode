# Last updated: 1/14/2026, 5:18:11 PM
class Solution:
    def canFinish(self, numCourses: int, prerequisites: List[List[int]]) -> bool:
        v = [-1] * numCourses

        g = [[] for _ in range(numCourses)]

        for i, j in prerequisites:
            g[j].append(i)

        def dfs(c):
            if v[c] == 0:
                return False
            
            if v[c] == 1:
                return True

            v[c] = 0

            for i in g[c]:
                if not dfs(i):
                    return False
            
            v[c] = 1
            
            return True
    
        for i in range(numCourses):
            if v[i] == -1:
                if not dfs(i):
                    return False

        return True