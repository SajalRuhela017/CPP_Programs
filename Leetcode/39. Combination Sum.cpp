// Given an array of distinct integers candidates and a target integer target, return a list of all unique combinations of candidates where the chosen numbers sum to target. You may return the combinations in any order.

// The same number may be chosen from candidates an unlimited number of times. Two combinations are unique if the 
// frequency
//  of at least one of the chosen numbers is different.

// The test cases are generated such that the number of unique combinations that sum up to target is less than 150 combinations for the given input.

class Solution {
public:
    void solve(int i, int target, vector<int> &v, vector<vector<int>> &ans, vector<int> &ds)
    {
        if(i == v.size())
        {
            if(target == 0)
                ans.push_back(ds);
            return;
        }
        if(v[i] <= target)
        {
            ds.push_back(v[i]);
            solve(i, target - v[i], v, ans, ds);
            ds.pop_back();
        }
        solve(i + 1, target, v, ans, ds);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target)
    {
        vector<vector<int>> ans;
        vector<int> ds;
        solve(0, target, candidates, ans, ds);
        return ans;    
    }
};