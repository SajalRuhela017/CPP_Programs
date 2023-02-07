// A string s is nice if, for every letter of the alphabet that s contains, it appears both in uppercase and lowercase. For example, "abABB" is nice because 'A' and 'a' appear, and 'B' and 'b' appear. However, "abA" is not because 'b' appears, but 'B' does not.

// Given a string s, return the longest substring of s that is nice. If there are multiple, return the substring of the earliest occurrence. If there are none, return an empty string.

class Solution {
public:
    string longestNiceSubstring(string s) 
    {
        if(s.size() == 1)   return "";
        string ans = "";
        unordered_set<char> st(s.begin() , s.end());
        for(int i = 0; i < s.size(); i++)
        {
            if(st.find(toupper(s[i])) == st.end() || st.find(tolower(s[i])) == st.end())
            {
                string s1 = longestNiceSubstring(s.substr(0 , i));
                string s2 = longestNiceSubstring(s.substr(i + 1));
                return s1.size() >= s2.size() ? s1 : s2;
            }
        }
        return s;
    }
};