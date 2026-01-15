# Last updated: 1/14/2026, 5:18:22 PM
class Solution:
    def isPalindrome(self, s: str) -> bool:
        newString = ""
        for i in s:
            if i.isalpha() or i.isdigit():
                newString += i.lower()
        print(newString)

        for i in range(len(newString)):
            if newString[i] != newString[len(newString) - i - 1]:
                return False
        return True
        