// You are given an array prices where prices[i] is the price of a given stock on the ith day.

// You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

// Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int profit = 0, min_ele = INT_MAX;
        for(int i = 0; i < prices.size(); i++)
        {
            min_ele = min(min_ele , prices[i]);
            profit = max(profit , prices[i] - min_ele);
        }    
        return profit;
    }
};