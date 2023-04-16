// Given a m x n binary matrix mat, find the 0-indexed position of the row that contains the maximum count of ones, and the number of ones in that row.

// In case there are multiple rows that have the maximum count of ones, the row with the smallest row number should be selected.

// Return an array containing the index of the row, and the number of ones in it.

class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) 
    {
        vector<vector<int>> ones;
        int row = 0, one = 0, mxone = 0;
        for(int i = 0; i < mat.size(); i++)
        {
            one = 0;
            for(int j = 0; j < mat[0].size(); j++)
                one += mat[i][j];
            
            if(one > mxone)
            {
                mxone = one;
                row = i;
            }
        }
        return {row, mxone};
    }
};