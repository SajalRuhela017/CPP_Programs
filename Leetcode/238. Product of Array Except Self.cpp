// Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].

// The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

// You must write an algorithm that runs in O(n) time and without using the division operation.

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) 
    {
        vector<int> ans(nums.size() , 1);
        int n = nums.size(), pre = 1, suf = 1;
        for(int i = 0; i < n; i++)
        {
            ans[i] *= pre;
            pre *= nums[i];
            ans[n - 1 - i] *= suf;
            suf *= nums[n - 1 - i];
        }                       
        return ans;
    }
};