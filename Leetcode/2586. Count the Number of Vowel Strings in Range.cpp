// You are given a 0-indexed array of string words and two integers left and right.

// A string is called a vowel string if it starts with a vowel character and ends with a vowel character where vowel characters are 'a', 'e', 'i', 'o', and 'u'.

// Return the number of vowel strings words[i] where i belongs to the inclusive range [left, right].

class Solution {
public:
    bool isVowel(char c)
    {
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            return true;
        return false;
    }
    
    int vowelStrings(vector<string>& words, int left, int right) 
    {
        int ans = 0;
        for(int i = left; i <= right; i++)
        {
            int n = words[i].size();
            if(isVowel(words[i][0]) && isVowel(words[i][n - 1]))
                ans++;
        }
        return ans;
    }
};