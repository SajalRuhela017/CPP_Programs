// Given an integer n, return a list of all simplified fractions between 0 and 1 (exclusive) such that the denominator is less-than-or-equal-to n. You can return the answer in any order.

class Solution {
public:
    vector<string> simplifiedFractions(int n) 
    {
        vector<string> ans;
        for(int i = 1; i < n; i++)
        {
            for(int j = i + 1; j <= n; j++)
            {
                if(__gcd(i , j) == 1)
                    ans.push_back(to_string(i) + "/" + to_string(j));
            }
        }
        return ans;
    }
};