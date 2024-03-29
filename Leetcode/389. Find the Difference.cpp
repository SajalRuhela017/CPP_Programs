// You are given two strings s and t.

// String t is generated by random shuffling string s and then add one more letter at a random position.

// Return the letter that was added to t.

class Solution {
public:
    char findTheDifference(string s, string t) 
    {
        sort(s.begin() , s.end());
        sort(t.begin() , t.end());
        for(int i = 0; i < s.size(); i++)
            if(s[i] != t[i])    return t[i];
        return t[t.size() - 1];    
    }
};