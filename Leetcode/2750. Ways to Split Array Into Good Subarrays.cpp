// You are given a binary array nums.

// A subarray of an array is good if it contains exactly one element with the value 1.

// Return an integer denoting the number of ways to split the array nums into good subarrays. As the number may be too large, return it modulo 109 + 7.

// A subarray is a contiguous non-empty sequence of elements within an array.

class Solution {
public:
    int numberOfGoodSubarraySplits(vector<int>& nums)
    {
        long long mod = 1e9 + 7;
        vector<int> ones;
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] == 1)
                ones.push_back(i);
        }
        if(ones.size() == 0)
            return 0;
        if(ones.size() == 1)
            return 1;
        long long ans = 1;
        for(int i = 1; i < ones.size(); i++)
            ans = ((ans % mod) * (ones[i] - ones[i - 1]) % mod) % mod;
        return (int)ans;
    }
};