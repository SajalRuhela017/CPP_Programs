// You are given two strings s1 and s2 of equal length. A string swap is an operation where you choose two indices in a string (not necessarily different) and swap the characters at these indices.

// Return true if it is possible to make both strings equal by performing at most one string swap on exactly one of the strings. Otherwise, return false.

class Solution {
public:
    bool areAlmostEqual(string s1, string s2) 
    {
        if(s1 == s2)    return true;
        int ind = -1, count = 0;
        for(int i = 0; i < s1.size(); i++)
            if(s1[i] != s2[i])
            {
                if(ind == -1)
                    ind = i;
                else
                {
                    if(s1[ind] != s2[i] || s1[i] != s2[ind])
                        return false;
                    else
                    {
                        ind = -1;
                        count++;
                    }
                }
            }
        return (count == 1 && ind == -1) ? true : false;
    }
};