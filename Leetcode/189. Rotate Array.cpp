// Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.

class Solution {
public:
    void rotate(vector<int>& nums, int k) 
    {
        int n = nums.size();
        k %= n;
        if(!k)
            return;
        reverse(nums.begin() , nums.begin() + n - k);
        reverse(nums.begin() + n - k , nums.end());
        reverse(nums.begin() , nums.end());
    }
};