// You are given a 0-indexed string s and a dictionary of words dictionary. You have to break s into one or more non-overlapping substrings such that each substring is present in dictionary. There may be some extra characters in s which are not present in any of the substrings.

// Return the minimum number of extra characters left over if you break up s optimally.

class Solution {
public:
    int minExtraChar(string s, vector<string>& dictionary)
    {
        int n = s.size();
        vector<int> dp(n + 1);
        map<string, int> mp;
        stack<string> st;
        for(int i = 1; i <= n; i++)
        {
            dp[i] = dp[i - 1] + 1;
            vector<int> found(i);
            for(auto j: dictionary)
            {
                int size = j.size();
                if(i >= size && s.substr(i - size, size) == j)
                {
                    string x = s.substr(i - size, size);
                    mp[x] = size;
                    int temp = i - j.size();
                    dp[i] = min(dp[i], dp[temp]);
                    dp[i] = min(dp[i], INT_MAX);
                }
            }
            mp.clear();
        }
        return dp.back();
    }
};