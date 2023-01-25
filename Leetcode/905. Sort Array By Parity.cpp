// Given an integer array nums, move all the even integers at the beginning of the array followed by all the odd integers.

// Return any array that satisfies this condition.

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) 
    {
        int n = nums.size(), j = 0, k = n - 1;
        vector<int> ans(n);
        for(int i = 0; i < n; i++)
            if(nums[i] & 1)     ans[k] = nums[i] , k--;
            else                ans[j] = nums[i] , j++;
        return ans;
    }
};