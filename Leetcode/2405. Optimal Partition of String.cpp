// Given a string s, partition the string into one or more substrings such that the characters in each substring are unique. That is, no letter appears in a single substring more than once.

// Return the minimum number of substrings in such a partition.

// Note that each character should belong to exactly one substring in a partition.

class Solution {
public:
    int partitionString(string s)
    {
        unordered_map<char , int> mp;
        int ans = 1;
        for(int i = 0; i < s.size(); i++)
        {
            mp[s[i]]++;
            if(mp[s[i]] > 1)
            {
                mp.clear();
                mp[s[i]]++;
                ans++;
            }
        }
        return ans;
    }
};