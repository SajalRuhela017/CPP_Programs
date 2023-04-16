// Given an integer array nums and an integer k, modify the array in the following way:

// choose an index i and replace nums[i] with -nums[i].
// You should apply this process exactly k times. You may choose the same index i multiple times.

// Return the largest possible sum of the array after modifying it in this way.

class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) 
    {
        sort(nums.begin(), nums.end());
        int i = 0;
        while(k && nums[i] <= 0 && i < nums.size())
        {
            nums[i++] *= -1;
            k--;
        }
        sort(nums.begin(), nums.end());
        int sum = accumulate(nums.begin(), nums.end(), 0);
        if(k & 1)
            return sum - 2 * nums[0];
        return sum;
    }
};