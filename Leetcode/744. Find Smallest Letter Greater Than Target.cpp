// You are given an array of characters letters that is sorted in non-decreasing order, and a character target. There are at least two different characters in letters.

// Return the smallest character in letters that is lexicographically greater than target. If such a character does not exist, return the first character in letters.

class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) 
    {
        vector<int> freq(26 , 0);
        for(int i = 0; i < letters.size(); i++)
            freq[letters[i] - 'a']++;
        int x = target - 'a';
        if(x < 26)
        {
            for(int i = x + 1; i < 26; i++)
            {
                if(freq[i])     return 'a' + i;
            }
        }
        return letters[0];
    }
};