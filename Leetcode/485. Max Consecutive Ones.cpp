// Given a binary array nums, return the maximum number of consecutive 1's in the array

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) 
    {
        int ans = 0, count = 1;
        for(int i = 0; i < nums.size(); i++)
        {
            if(i > 0 && nums[i] == 1 && nums[i - 1] == 1)
                count++ , ans = max(ans , count);
            else if(nums[i] == 1)
                count = 1 , ans = max(ans , count);
            else
                count = 0;
        }
        return ans;
    }
};