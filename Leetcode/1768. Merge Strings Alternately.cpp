// You are given two strings word1 and word2. Merge the strings by adding letters in alternating order, starting with word1. If a string is longer than the other, append the additional letters onto the end of the merged string.

// Return the merged string.

class Solution {
public:
    string mergeAlternately(string word1, string word2) 
    {
        int n = word1.length() , m = word2.length(), i = 0, j = 0;
        string ans = "";
        while(i < n && j < m)
        {
            ans += word1[i];
            ans += word2[j];
            i++ , j++;
        }    
        for(i; i < n; i++)
            ans += word1[i];
        for(j; j < m; j++)
            ans += word2[j];
        return ans;
    }
};