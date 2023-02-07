// A string is good if there are no repeated characters.

// Given a string s​​​​​, return the number of good substrings of length three in s​​​​​​.

// Note that if there are multiple occurrences of the same substring, every occurrence should be counted.

// A substring is a contiguous sequence of characters in a string.

class Solution {
public:
    int countGoodSubstrings(string s) 
    {
        int n = s.size(), count = 0;
        unordered_map<char , int> mp;
        for(int i = 0; i < 3; i++)
            mp[s[i]]++;

        if(mp.size() == 3)  count = 1;

        for(int i = 3; i < n; i++)
        {
            mp[s[i]]++;
            if(--mp[s[i - 3]] == 0) 
                mp.erase(s[i - 3]);
            if(mp.size() == 3)  count++;
        }
        return count;
    }
};