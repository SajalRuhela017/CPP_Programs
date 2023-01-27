// Given a string s consisting of lowercase English letters, return the first letter to appear twice.

// Note:

// A letter a appears twice before another letter b if the second occurrence of a is before the second occurrence of b.
// s will contain at least one letter that appears twice.

class Solution {
public:
    char repeatedCharacter(string s) 
    {
        vector<int> freq(26 , 0);
        char ans;
        for(int i = 0; i < s.size(); i++)
        {
            freq[s[i] - 'a']++;
            if(freq[s[i] - 'a'] == 2)
            {
                ans = s[i];
                break;
            }
        }
        return ans;
    }
};