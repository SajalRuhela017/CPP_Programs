// Given a string s and an integer k, return the maximum number of vowel letters in any substring of s with length k.

// Vowel letters in English are 'a', 'e', 'i', 'o', and 'u'.

class Solution {
public:
    bool isVowel(char c)
    {
        return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');        
    }

    int maxVowels(string s, int k)
    {
        int ans = 0, size = 0;
        for(int i = 0; i < k; i++)
            size += isVowel(s[i]);
        ans = size;
        for(int i = k; i < s.size(); i++)
        {
            if(isVowel(s[i - k]))
                size--;
            if(isVowel(s[i]))
                size++;
            ans = max(size, ans);
        }
        return ans;
    }
};