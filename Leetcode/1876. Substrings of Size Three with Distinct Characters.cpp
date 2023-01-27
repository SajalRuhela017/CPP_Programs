// A string is good if there are no repeated characters.

// Given a string s​​​​​, return the number of good substrings of length three in s​​​​​​.

// Note that if there are multiple occurrences of the same substring, every occurrence should be counted.

// A substring is a contiguous sequence of characters in a string.

class Solution {
public:
    int countGoodSubstrings(string s) 
    {
        int n = s.size(), count = 0;
        for(int i = 0; i < n - 2; i++)
            if(s[i] != s[i + 1] && s[i + 1] != s[i + 2] && s[i] != s[i + 2])    count++;
        return count;
    }
};