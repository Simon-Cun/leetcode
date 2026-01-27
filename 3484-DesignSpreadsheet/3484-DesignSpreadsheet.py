# Last updated: 1/26/2026, 5:22:52 PM
1class Spreadsheet:
2
3    def __init__(self, rows: int):
4        self.spreadsheet = {}
5        self.row_count = rows
6
7    def setCell(self, cell: str, value: int) -> None:
8        self.spreadsheet[cell] = value
9
10    def resetCell(self, cell: str) -> None:
11        self.spreadsheet[cell] = 0
12
13    def getValue(self, formula: str) -> int:
14        cell1, cell2 = formula[1:].split('+')
15        if cell1.isnumeric() and cell2.isnumeric():
16            return int(cell1) + int(cell2)
17        elif cell1.isnumeric() and not cell2.isnumeric():
18            return int(cell1) + self.spreadsheet.get(cell2, 0)
19        elif not cell1.isnumeric() and cell2.isnumeric():
20            return self.spreadsheet.get(cell1, 0) + int(cell2)
21        else:
22            return self.spreadsheet.get(cell1, 0) + self.spreadsheet.get(cell2, 0)
23
24
25# Your Spreadsheet object will be instantiated and called as such:
26# obj = Spreadsheet(rows)
27# obj.setCell(cell,value)
28# obj.resetCell(cell)
29# param_3 = obj.getValue(formula)