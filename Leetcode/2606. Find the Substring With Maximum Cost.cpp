// You are given a string s, a string chars of distinct characters and an integer array vals of the same length as chars.

// The cost of the substring is the sum of the values of each character in the substring. The cost of an empty string is considered 0.

// The value of the character is defined in the following way:

// If the character is not in the string chars, then its value is its corresponding position (1-indexed) in the alphabet.
// For example, the value of 'a' is 1, the value of 'b' is 2, and so on. The value of 'z' is 26.
// Otherwise, assuming i is the index where the character occurs in the string chars, then its value is vals[i].
// Return the maximum cost among all substrings of the string s.

class Solution {
public:
    int maximumCostSubstring(string s, string chars, vector<int>& vals) 
    {
        vector<int> freq(26, 1001);
        for(int i = 0; i < chars.size(); i++)
            freq[chars[i] - 'a'] = vals[i];
        for(int i = 0; i < 26; i++)
        {
            if(freq[i] == 1001)
                freq[i] = i + 1;
        }
        int curr = 0, ans = INT_MIN;
        for(int i = 0; i < s.size(); i++)
        {
            curr += freq[s[i] - 'a'];
            if(curr < 0)
                curr = 0;
            if(ans < curr)
                ans = curr;
        }
        return ans;
    }
};