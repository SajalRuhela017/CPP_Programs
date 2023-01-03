// You are given a string number representing a positive integer and a character digit.

// Return the resulting string after removing exactly one occurrence of digit from number such that the value of the resulting string in decimal form is maximized. The test cases are generated such that digit occurs at least once in number.

class Solution {
public:
    string removeDigit(string number, char digit) 
    {
        for(int i = 0; i < number.size() - 1; i++)
            if(number[i] == digit && number[i + 1] > digit)
                return number.substr(0 , i) + number.substr(i + 1);
        int x = number.rfind(digit);
        return number.substr(0 , x) + number.substr(x + 1);
    }
};