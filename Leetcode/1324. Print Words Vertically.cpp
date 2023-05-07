// Given a string s. Return all the words vertically in the same order in which they appear in s.
// Words are returned as a list of strings, complete with spaces when is necessary. (Trailing spaces are not allowed).
// Each word would be put on only one column and that in one column there will be only one word.

class Solution {
public:
    vector<string> printVertically(string s)
    {
        vector<string> v;
        int mx = 0;
        istringstream ss(s);
        for(string i; ss >> i;)
        {
            v.push_back(i);
            mx = max(mx, (int)i.length());
        }
        vector<string> ans(mx);
        for(int i = 0; i < mx; i++)
        {
            for(auto &w: v)
                ans[i] += (i < w.size() ? w[i] : ' ');

            while(ans[i].back() == ' ')
                ans[i].pop_back();
        }
        return ans;
    }
};