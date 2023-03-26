// Given a string s, find the length of the longest substring without repeating characters.

class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        unordered_map<char , int> mp;
        int i = 0, j = 0, mx = 0, ans = 0;
        while(i < s.size())
        {
            mp[s[i]]++;
            while(mp[s[i]] > 1)
            {
                mp[s[j]]--;
                j++;
            }
            ans = max(ans , i - j + 1);
            i++;
        }
        return ans;
    }
};