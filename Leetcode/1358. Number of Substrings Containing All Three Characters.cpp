Given a string s consisting only of characters a, b and c.

Return the number of substrings containing at least one occurrence of all these characters a, b and c.

class Solution {
public:
    int numberOfSubstrings(string s) 
    {
        int count[3] = {0, 0, 0}, ans = 0, j = 0;
        for (int i = 0; i < s.size(); i++) 
        {
            count[s[i] - 'a']++;
            while (count[0] && count[1] && count[2])
                count[s[j++] - 'a']--;
            ans += j;
        }
        return ans;
    }
};