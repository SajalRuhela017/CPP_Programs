// Given an integer n, return the count of all numbers with unique digits, x, where 0 <= x < 10n.

class Solution {
public:
    int countNumbersWithUniqueDigits(int n) 
    {
        vector<int> dp(9);
        dp[0] = 1, dp[1] = 10;
        int x = 9, val = 9;
        for(int i = 2; i <= n; i++)
        {
            dp[i] = dp[i - 1] + x * val;
            val *= x;
            x--; 
        }    
        return dp[n];
    }
};