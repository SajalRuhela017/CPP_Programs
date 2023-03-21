// Given an integer array nums, return the number of subarrays filled with 0.

// A subarray is a contiguous non-empty sequence of elements within an array.

class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) 
    {
        long long count_0 = 0, ans = 0;
        vector<long long> freq;
        for(int i = 0; i < nums.size(); i++)
        {
            if(!nums[i])
                count_0++;
            else if(count_0)
            {
                freq.push_back(count_0);
                count_0 = 0;
            }
        }
        if(count_0)
            freq.push_back(count_0);
        for(int i = 0; i < freq.size(); i++)
            ans = ans + freq[i] * (freq[i] + 1) / 2;
        return ans;        
    }
};