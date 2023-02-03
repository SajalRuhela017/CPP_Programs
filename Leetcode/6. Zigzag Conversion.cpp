// The string "PAYPALISHIRING" is written in a zigzag pattern on a given number of rows like this: (you may want to display this pattern in a fixed font for better legibility)

// P   A   H   N
// A P L S I I G
// Y   I   R
// And then read line by line: "PAHNAPLSIIGYIR"

// Write the code that will take a string and make this conversion given a number of rows:

// string convert(string s, int numRows);

class Solution {
public:
    string convert(string s, int numRows) 
    {
        string ans;
        vector <string> tmp(numRows);
        int i = 0, n = s.size();
        while(i < n)
        {                                      
            for(int j = 0; j < numRows && i < n; j++, i++) 
                tmp[j] += s[i];
            for(int j = numRows - 2; j > 0 && i < n; j--, i++) 
                tmp[j] += s[i];
        }
        for(int j = 0; j < numRows; j++) ans += tmp[j];
        return ans;    
    }
};