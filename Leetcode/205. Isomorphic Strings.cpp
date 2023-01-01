// Given two strings s and t, determine if they are isomorphic.
// Two strings s and t are isomorphic if the characters in s can be replaced to get t.
// All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character, but a character may map to itself.

class Solution {
public:
    bool isIsomorphic(string s, string t) 
    {
        unordered_map<char , char> mp1;
        unordered_map<char , char> mp2;
        if(s.size() != t.size())    return false;
        for(int i = 0; i < s.size();)
        {
            if((mp1[s[i]] && mp1[s[i]] != t[i]) || (mp2[t[i]] && mp2[t[i]] != s[i]))
            {
                return false;
            }
            else
            {
                mp1[s[i]] = t[i];
                mp2[t[i]] = s[i];
                i++;
            }
        }
        return true;
    }
};