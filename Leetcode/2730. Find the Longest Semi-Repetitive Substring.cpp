// You are given a 0-indexed string s that consists of digits from 0 to 9.

// A string t is called a semi-repetitive if there is at most one consecutive pair of the same digits inside t. For example, 0010, 002020, 0123, 2002, and 54944 are semi-repetitive while 00101022, and 1101234883 are not.

// Return the length of the longest semi-repetitive substring inside s.

// A substring is a contiguous non-empty sequence of characters within a string.

class Solution {
public:
    int longestSemiRepetitiveSubstring(string s)
    {
        int ans = 1, i = 0, j = 0, n = s.size();
        for(int i = 0; i < n; i++)
        {
            vector<int> f(10);
            int two = 0;
            for(int j = i + 1; j < n; j++)
            {
                f[s[j] - '0']++;
                if(s[j] == s[j - 1])
                    two++;
                if(two <= 1)
                    ans = max(ans, j - i + 1);
                else
                    break;
            }
        }
        return ans;
    }
};