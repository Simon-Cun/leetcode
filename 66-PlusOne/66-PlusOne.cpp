// Last updated: 1/14/2026, 5:18:34 PM
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        digits.at(digits.size() - 1)++;
        
        for(int i = digits.size()-1; i > 0; --i)
        {
            if(digits.at(i) == 10)
            {
                digits.at(i) = 0;
                digits.at(i-1)++;
            }
            else
            {
                break;
            }
        }
        if(digits.at(0) == 10)
        {
            digits.at(0) = 1;
            digits.push_back(0);
        }
        return digits;
    }
};