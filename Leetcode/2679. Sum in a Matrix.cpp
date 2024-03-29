// You are given a 0-indexed 2D integer array nums. Initially, your score is 0. Perform the following operations until the matrix becomes empty:

// From each row in the matrix, select the largest number and remove it. In the case of a tie, it does not matter which number is chosen.
// Identify the highest number amongst all those removed in step 1. Add that number to your score.
// Return the final score.

class Solution {
public:
    int matrixSum(vector<vector<int>>& nums)
    {
        for(int i = 0; i < nums.size(); ++i)
            sort(nums[i].begin(), nums[i].end());
        int score = 0;
        for(int i = 0; i < nums[0].size(); i++)
        {
            int mx = 0;
            for(int j = 0; j < nums.size(); j++)
                mx = max(mx, nums[j][i]);
            score += mx;
        }
        return score;
    }
};