// You are given a 0-indexed m x n integer matrix grid. The width of a column is the maximum length of its integers.

// For example, if grid = [[-10], [3], [12]], the width of the only column is 3 since -10 is of length 3.
// Return an integer array ans of size n where ans[i] is the width of the ith column.

// The length of an integer x with len digits is equal to len if x is non-negative, and len + 1 otherwise.

class Solution {
public:
    int digits(int n)
    {
        if(n == 0)
            return 1;
        return floor(log10(n) + 1);    
    }
    
    int calculateSize(vector<int> v)
    {
        int ans = 0;
        for(int i = 0; i < v.size(); i++)
        {
            int x = digits(abs(v[i]));
            if(v[i] < 0)
                x++;
            ans = max(ans, x);
        }
        return ans;
    }
    
    vector<int> findColumnWidth(vector<vector<int>>& grid) 
    {
        vector<int> ans;
        for(int i = 0; i < grid[0].size(); i++)
        {
            vector<int> temp;
            for(int j = 0; j < grid.size(); j++)
                temp.push_back(grid[j][i]);
            ans.push_back(calculateSize(temp));
        }
        return ans;
    }
};