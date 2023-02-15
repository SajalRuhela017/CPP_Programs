// Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

// Note that you must do this in-place without making a copy of the array.

class Solution {
public:
    void moveZeroes(vector<int>& nums) 
    {
        int i = 0, j = 0;
        while(i < nums.size())
        {
            if(nums[i])
                nums[j++] = nums[i];
            i++;
        }
        while(j < nums.size())
            nums[j++] = 0; 
    }
};