// There are two mice and n different types of cheese, each type of cheese should be eaten by exactly one mouse.

// A point of the cheese with index i (0-indexed) is:

// reward1[i] if the first mouse eats it.
// reward2[i] if the second mouse eats it.
// You are given a positive integer array reward1, a positive integer array reward2, and a non-negative integer k.

// Return the maximum points the mice can achieve if the first mouse eats exactly k types of cheese.

class Solution {
public:
    int miceAndCheese(vector<int>& reward1, vector<int>& reward2, int k) 
    {
        int n = reward1.size(), ans = 0;
        if(n == k)
            return accumulate(reward1.begin() , reward1.end() , 0);
        
        vector<pair<int , int>> diff;
        
        for(int i = 0; i < n; i++)
            diff.push_back(make_pair(reward1[i] - reward2[i], i));
        
        sort(diff.begin(), diff.end(), greater<pair<int, int>>());
        
        for(int i = 0; i < k; i++)
            ans += reward1[diff[i].second];
        
        for(int i = k; i < n; i++)
            ans += reward2[diff[i].second];
        
        return ans;
    }
};