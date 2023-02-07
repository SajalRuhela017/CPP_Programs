// Given a binary array nums and an integer k, return the maximum number of consecutive 1's in the array if you can flip at most k 0's.

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) 
    {
        int i = 0, j = 0;
        for(i = 0; i < nums.size(); ++i) 
        {
            if(nums[i] == 0)   k--;
            if(k < 0 && nums[j++] == 0)    k++;
        }
        return i - j;
    }
};