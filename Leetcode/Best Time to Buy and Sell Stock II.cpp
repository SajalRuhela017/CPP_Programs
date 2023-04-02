// You are given an integer array prices where prices[i] is the price of a given stock on the ith day.

// On each day, you may decide to buy and/or sell the stock. You can only hold at most one share of the stock at any time. However, you can buy it then immediately sell it on the same day.

// Find and return the maximum profit you can achieve.

class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int ans = 0, n = prices.size();
        stack<int> st;
        for(int i = n - 1; i >= 0; i--)
        {
            if(!st.empty() && st.top() > prices[i])
            {
                ans += st.top() - prices[i];
                st.pop();
            }
            st.push(prices[i]);
        }
        return ans;
    }
};