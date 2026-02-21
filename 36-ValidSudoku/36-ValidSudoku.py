# Last updated: 2/20/2026, 4:13:02 PM
1class Solution:
2    def isValidSudoku(self, board: List[List[str]]) -> bool:
3        row, col = len(board), len(board[0])
4        for i in range(row):
5            bitmask = 0
6            for j in range(col):
7                if board[i][j] == '.':
8                    continue
9                elif bitmask & (1 << int(board[i][j])):
10                    return False
11                else:
12                    bitmask |= (1 << int(board[i][j]))
13
14        for i in range(row):
15            bitmask = 0
16            for j in range(col):
17                if board[j][i] == '.':
18                    continue
19                elif bitmask & (1 << int(board[j][i])):
20                    return False
21                else:
22                    bitmask |= (1 << int(board[j][i]))
23
24        for i in range(0, row, 3):
25            for j in range(0, col, 3):
26                bitmask = 0
27                for k in range(i, i + 3):
28                    for l in range(j, j + 3):
29                        if board[k][l] == '.':
30                            continue
31                        elif bitmask & (1 << int(board[k][l])):
32                            return False
33                        else:
34                            bitmask |= (1 << int(board[k][l]))
35        return True