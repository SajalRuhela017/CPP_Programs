// We define the usage of capitals in a word to be right when one of the following cases holds:

// All letters in this word are capitals, like "USA".
// All letters in this word are not capitals, like "leetcode".
// Only the first letter in this word is capital, like "Google".
// Given a string word, return true if the usage of capitals in it is right.

class Solution {
public:
    bool detectCapitalUse(string word) 
    {
        int count = 0;
        for(int i = 0; i < word.length(); i++)
            if(word[i] <= 90) 
                count++;
        if(count == word.size() || count == 0)      return true;
        if(count == 1 && word[0] <= 90)             return true;
        return false;
    }
};