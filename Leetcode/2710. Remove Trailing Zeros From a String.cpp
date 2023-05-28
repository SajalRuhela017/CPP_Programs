// Given a positive integer num represented as a string, return the integer num without trailing zeros as a string.

class Solution {
public:
    string removeTrailingZeros(string num)
    {
        int i = num.size() - 1;
        while(num[i] == '0')
            i--;
        string ans = num.substr(0, i + 1);
        return ans;
    }
};