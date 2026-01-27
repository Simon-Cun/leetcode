# Last updated: 1/26/2026, 5:21:52 PM
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
15        print(cell1, cell2)
16        if cell1.isnumeric() and cell2.isnumeric():
17            return int(cell1) + int(cell2)
18        elif cell1.isnumeric() and not cell2.isnumeric():
19            return int(cell1) + self.spreadsheet.get(cell2, 0)
20        elif not cell1.isnumeric() and cell2.isnumeric():
21            return self.spreadsheet.get(cell1, 0) + int(cell2)
22        else:
23            return self.spreadsheet.get(cell1, 0) + self.spreadsheet.get(cell2, 0)
24
25
26# Your Spreadsheet object will be instantiated and called as such:
27# obj = Spreadsheet(rows)
28# obj.setCell(cell,value)
29# obj.resetCell(cell)
30# param_3 = obj.getValue(formula)