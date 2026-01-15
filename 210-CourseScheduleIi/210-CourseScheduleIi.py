# Last updated: 1/14/2026, 5:18:10 PM
class Solution:
    def findOrder(self, numCourses: int, prerequisites: List[List[int]]) -> List[int]:
        g = [[] for _ in range(numCourses)]

        for i, j in prerequisites:
            g[j].append(i)

        v = [-1] * numCourses
        res = []

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
            res.append(c)

            return True

        for i in range(numCourses):
            if v[i] == -1:
                if not dfs(i):
                    return []

        return res[::-1]