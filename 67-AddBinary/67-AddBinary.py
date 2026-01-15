# Last updated: 1/14/2026, 5:18:33 PM
class Solution:
    def addBinary(self, a: str, b: str) -> str:
        num1 = 0
        num2 = 0
        for i in range(len(a) - 1, -1, -1):
            if a[i] == '1':
                num1 += 2 ** (len(a) - i - 1)
        for i in range(len(b) - 1, -1, -1):
            if b[i] == '1':
                num2 += 2 ** (len(b) - i - 1)
        
        return bin(num1 + num2)[2:]