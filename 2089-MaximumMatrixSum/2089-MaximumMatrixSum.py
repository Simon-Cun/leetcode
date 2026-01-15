# Last updated: 1/14/2026, 5:17:47 PM
class Solution:
    def maxMatrixSum(self, matrix: List[List[int]]) -> int:
        count = 0
        s = 0
        m = float('inf')
        for i in range(len(matrix)):
            for j in range(len(matrix[0])):
                s += abs(matrix[i][j])
                if matrix[i][j] <= 0:
                    count += 1
                if m > abs(matrix[i][j]):
                    m = abs(matrix[i][j])
        if count % 2 == 0:
            return s
        else:
            return s - 2 * m

