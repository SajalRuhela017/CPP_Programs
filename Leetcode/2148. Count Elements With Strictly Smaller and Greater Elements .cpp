// Given an integer array nums, return the number of elements that have both a strictly smaller and a strictly greater element appear in nums.

class Solution {
public:
    int countElements(vector<int>& nums) 
    {
        int mn = INT_MAX, mx = INT_MIN, cmn = 0, cmx = 0, n = nums.size();
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] <= mn)
            {
                if(mn == nums[i])
                    cmn++;
                else
                    cmn = 1 , mn = nums[i];
            }
            if(nums[i] >= mx)
            {
                if(mx == nums[i])
                    cmx++;
                else
                    cmx = 1 , mx = nums[i];
            }
        }    
        return (n - min(n , cmn + cmx));
    }
};