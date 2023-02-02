// Given an integer array nums sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) 
    {
        int n = nums.size(), i = 0, j = n - 1;
        vector<int> ans(n , 0);
        for(int k = n - 1; k >= 0; k--)
        {
            if(abs(nums[i]) > nums[j])
            {
                ans[k] = nums[i] * nums[i];
                i++;
            }
            else
            {
                ans[k] = nums[j] * nums[j];
                j--;
            }
        }
        return ans;
    }
};