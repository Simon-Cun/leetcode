// Last updated: 1/14/2026, 5:18:25 PM
#include <string>
#include <cctype>

using std::tolower;
using std::string;

class Solution {
public:
    bool isPalindrome(string s) {
        string fullStringNoSpace = "";
        for(unsigned int i = 0; i < s.size(); ++i) {
            if(isalpha(s[i]) || isdigit(s[i])) {
                fullStringNoSpace += tolower(s[i]);
            }
        }
        for(unsigned int i = 0; i < fullStringNoSpace.size() / 2; ++i) {
            if(fullStringNoSpace[i] != fullStringNoSpace[fullStringNoSpace.size() - 1 - i]) {
                return false;
            }
        }
        return true;
    }
};