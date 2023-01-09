// You are given a string s formed by digits and '#'. We want to map s to English lowercase characters as follows:

// Characters ('a' to 'i') are represented by ('1' to '9') respectively.
// Characters ('j' to 'z') are represented by ('10#' to '26#') respectively.
// Return the string formed after mapping.

// The test cases are generated so that a unique mapping will always exist.

class Solution {
public:
    string freqAlphabets(string s) 
    {
        string ans = "";
        for(int i = 0; i < s.size();)
            if(i >= s.size() - 2 || s[i + 2] != '#')
            {
                s[i] -= '0' ;
                ans += ('a' + s[i] - 1);
                i++;
            }
            else
            {
                char x = 'a' + ((s[i] - '0') * 10 + (s[i + 1] - '0') - 1);
                ans += x;
                i += 3;
            }    
        return ans;
    }
};