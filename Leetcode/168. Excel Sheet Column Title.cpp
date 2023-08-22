// Given an integer columnNumber, return its corresponding column title as it appears in an Excel sheet.

// For example:

// A -> 1
// B -> 2
// C -> 3
// ...
// Z -> 26
// AA -> 27
// AB -> 28 
// ...

class Solution {
public:
    string convertToTitle(int columnNumber)
    {
        string ans = "";
        while(columnNumber)
        {
            columnNumber--;
            ans += ('A' + (columnNumber % 26));
            columnNumber /= 26;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};