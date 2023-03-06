// You are given an m x n integer matrix grid.

// We define an hourglass as a part of the matrix with the following form:

// Return the maximum sum of the elements of an hourglass.

// Note that an hourglass cannot be rotated and must be entirely contained within the matrix.

class Solution {
public:
    int maxSum(vector<vector<int>>& grid) 
    {
        int sum = 0, curr_sum = 0, n = grid.size(), m = grid[0].size();
        for(int i = 0; i < n - 2; i++)
        {
            for(int j = 0; j < m - 2; j++)
            {
                curr_sum = grid[i][j] + grid[i][j + 1] + grid[i][j + 2] 
                                    + grid[i + 1][j + 1] + 
                           grid[i + 2][j] + grid[i + 2][j + 1] + grid[i + 2][j + 2];
                sum = max(sum , curr_sum); 
            }
        }
        return sum;    
    }
};