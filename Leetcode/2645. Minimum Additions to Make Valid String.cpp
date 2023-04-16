// Given a string word to which you can insert letters "a", "b" or "c" anywhere and any number of times, return the minimum number of letters that must be inserted so that word becomes valid.

// A string is called valid if it can be formed by concatenating the string "abc" several times.

class Solution {
public:
    int addMinimum(string s) 
    {
        int ans = 0;
        if(s.size() == 1)
            return 2;
        if(s[0] == 'c')
            ans += 2;
        else if(s[0] == 'b')
            ans++;
        for(int i = 0; i < s.size() - 1; i++)
        {
            if(s[i] == 'a' && s[i + 1] != 'b')
            {
                if(s[i + 1] == 'a')
                    ans += 2;
                if(s[i + 1] == 'c')
                    ans++;
            }
            else if(s[i] == 'b' && s[i + 1] != 'c')
            {
                if(s[i + 1] == 'a')
                    ans++;
                else if(s[i + 1] == 'b')
                    ans += 2;
            }
            else if(s[i] == 'c' && s[i + 1] != 'a')
            {
                if(s[i + 1] == 'c')
                    ans += 2;
                else
                    ans++;
            }
        }
        if(s.back() == 'a')
            ans += 2;
        if(s.back() == 'b')
            ans++;
        return ans;
    }
};