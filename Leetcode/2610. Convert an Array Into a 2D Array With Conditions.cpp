// You are given an integer array nums. You need to create a 2D array from nums satisfying the following conditions:

// The 2D array should contain only the elements of the array nums.
// Each row in the 2D array contains distinct integers.
// The number of rows in the 2D array should be minimal.
// Return the resulting array. If there are multiple answers, return any of them.

// Note that the 2D array can have a different number of elements on each row.

class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) 
    {
        vector<vector<int>> ans;
        int n = nums.size(), sum = 0;
        while(sum > -1 * n)
        {
            vector<int> temp;
            for(int i = 0; i < n; i++)
            {
                if(nums[i] != -1 && find(temp.begin() , temp.end() , nums[i]) == temp.end())
                {
                    temp.push_back(nums[i]);
                    nums[i] = -1;
                    sum--;
                }
            }
            ans.push_back(temp);
        }
        return ans;
    }
};