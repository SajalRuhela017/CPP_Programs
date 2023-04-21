// The beauty of a string is the difference in frequencies between the most frequent and least frequent characters.

// For example, the beauty of "abaacc" is 3 - 1 = 2.
// Given a string s, return the sum of beauty of all of its substrings.

class Solution {
public:
    int beautySum(string s) 
    {
        int sum = 0;
        for(int i = 0; i < s.size(); i++)
        {
            vector<int> freq(26, 0);
            int mx = 0, mn = 0;
            for(int j = i; j < s.size(); j++)
            {
                mx = max(mx, ++freq[s[j] - 'a']);
                if(mn + 1 >= freq[s[j] - 'a'])
                {
                    mn = freq[s[j] - 'a'];
                    for(int k = 0; k < 26; k++)
                        mn = min(mn, !freq[k] ? INT_MAX : freq[k]);
                }
                sum += (mx - mn);
            }
        }
        return sum;
    }
};