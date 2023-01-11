// Given two strings s and t, return true if t is an anagram of s, and false otherwise.

// An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        if(s.size() != t.size())    return false;
        int n = s.size();
        unordered_map<char , int> mp;
        for(int i = 0; i < n; i++)
        {
            mp[s[i] - 'a']++;
            mp[t[i] - 'a']--;
        }
        for(auto i : mp)
        {
            if(i.second)
            {
                return false;
            }
        }
        return true;
    }
};