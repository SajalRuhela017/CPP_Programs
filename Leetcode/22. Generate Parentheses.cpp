// Given n pairs of parentheses, write a function to generate all combinations of well-formed parentheses.

class Solution {
public:
    void addString(vector<string>& v, string s, int n, int m)
    {
        if(n == 0 && m == 0)
        {
            v.push_back(s);
            return;
        }
        if(m > 0)
            addString(v, s + ")", n, m - 1);
        if(n > 0)
            addString(v, s + "(", n - 1, m + 1);
    }

    vector<string> generateParenthesis(int n) 
    {
        vector<string> ans;
        addString(ans, "", n, 0);
        return ans;
    }
};