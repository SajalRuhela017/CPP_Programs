// Given a string s, return true if the s can be palindrome after deleting at most one character from it.

class Solution {
public:
    bool validPalindrome(string s) 
    {
        return validPalindrome(s, 0, s.size() - 1, 0);
    }
    
    bool validPalindrome(string s, int i, int j, int count)
    {
        if(count > 1)
            return false;
        while(i < j)
        {
            if(s[i] == s[j])
                i++ , j--;
            else
                return validPalindrome(s, i + 1, j, count + 1) || validPalindrome(s, i, j - 1, count + 1);
        }
        return true;
    }
};