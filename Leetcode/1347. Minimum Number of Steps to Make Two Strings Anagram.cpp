// You are given two strings of the same length s and t. In one step you can choose any character of t and replace it with another character.

// Return the minimum number of steps to make t an anagram of s.

// An Anagram of a string is a string that contains the same characters with a different (or the same) ordering

class Solution {
public:
    int minSteps(string s, string t) 
    {
        vector<int> freq(26);
        for(int i = 0; i < s.size(); i++)
            freq[s[i] - 'a']++ , freq[t[i] - 'a']--; 
        int ans = 0;
        for(int i = 0; i < 26; i++)
            ans += (freq[i] > 0 ? freq[i] : 0);
        return ans;
    }
};