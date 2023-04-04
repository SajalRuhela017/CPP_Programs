// Given an integer array nums and an integer k, return true if nums has a good subarray or false otherwise.

// A good subarray is a subarray where:

// its length is at least two, and
// the sum of the elements of the subarray is a multiple of k.
// Note that:

// A subarray is a contiguous part of the array.
// An integer x is a multiple of k if there exists an integer n such that x = n * k. 0 is always a multiple of k.

class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) 
    {
        if(nums.size() == 1)
            return false;
        map<int, int> mp;
        mp[0] = -1;
        int sum = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];
            if(k)
                sum %= k;
            if(mp.find(sum) != mp.end())
            {
                if(i - mp[sum] > 1)
                    return true;
            }
            else
                mp[sum] = i;
        }
        return false;
    }
};