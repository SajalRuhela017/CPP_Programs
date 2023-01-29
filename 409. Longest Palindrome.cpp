// Given a string s which consists of lowercase or uppercase letters, return the length of the longest palindrome that can be built with those letters.

// Letters are case sensitive, for example, "Aa" is not considered a palindrome here.

class Solution {
public:
    int longestPalindrome(string s) 
    {
        vector<int> small(26 , 0), capital(26 , 0);
        for(int i = 0; i < s.size(); i++)
        {
            if((s[i] - 'a') >= 0 && (s[i] - 'a') <= 25)     small[s[i] - 'a']++;
            else    capital[s[i] - 'A']++;
        }    
        int len = 0, odd = 0;
        for(int i = 0; i < 26; i++)
        {
            if(small[i] & 1)
                odd++;
            if(capital[i] & 1)
                odd++;
            len += small[i];
            len += capital[i];
        }
        return len - max(0 , odd - 1);
    }
};