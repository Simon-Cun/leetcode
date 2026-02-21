# Last updated: 2/20/2026, 4:08:26 PM
1class Solution:
2    def isValidSudoku(self, board: List[List[str]]) -> bool:
3        row, col = len(board), len(board[0])
4        for i in range(row):
5            bit_mask = 0
6            for j in range(col):
7                if board[i][j] == '.':
8                    continue
9                elif bit_mask & (1 << int(board[i][j])):
10                    return False
11                else:
12                    bit_mask |= (1 << int(board[i][j]))
13
14        for i in range(row):
15            bit_mask = 0
16            for j in range(col):
17                if board[j][i] == '.':
18                    continue
19                elif bit_mask & (1 << int(board[j][i])):
20                    return False
21                else:
22                    bit_mask |= (1 << int(board[j][i]))
23
24        for i in range(0, row, 3):
25            for j in range(0, col, 3):
26                print()
27                bit_mask = 0
28                for k in range(i, i + 3):
29                    
30                    for l in range(j, j + 3):
31                        if board[k][l] == '.':
32                            continue
33                        elif bit_mask & (1 << int(board[k][l])):
34                            return False
35                        else:
36                            bit_mask |= (1 << int(board[k][l]))
37        return True