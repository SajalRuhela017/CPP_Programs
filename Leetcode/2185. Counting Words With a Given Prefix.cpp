// You are given an array of strings words and a string pref.

// Return the number of strings in words that contain pref as a prefix.

// A prefix of a string s is any leading contiguous substring of s.

class Solution {
public:
    int prefixCount(vector<string>& words, string pref) 
    {
        int n = pref.size(), count = 0;
        for(int i = 0; i < words.size(); i++)
            if(words[i].substr(0 , n) == pref)  count++;
        return count;
    }
};