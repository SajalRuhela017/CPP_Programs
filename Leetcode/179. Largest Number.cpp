// Given a list of non-negative integers nums, arrange them such that they form the largest number and return it.

// Since the result may be very large, so you need to return a string instead of an integer.

class Solution {
public:
    string largestNumber(vector<int>& nums)
    {
        vector<string> v;
        for(auto i: nums)
            v.push_back(to_string(i));
        sort(v.begin(), v.end(), [](string &s1, string &s2){ return s1 + s2 > s2 + s1; });
        string ans = "";
        for(auto s: v)
            ans += s;
        while(ans[0] == '0' && ans.length() > 1)
            ans.erase(0, 1);
        return ans;
    }
};