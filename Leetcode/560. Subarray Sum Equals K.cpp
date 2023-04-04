// Given an array of integers nums and an integer k, return the total number of subarrays whose sum equals to k.

// A subarray is a contiguous non-empty sequence of elements within an array.

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) 
    {
        int ans = 0, pref = 0;
        unordered_map<int, int> mp;
        mp[0] = 1;
        for(int i = 0; i < nums.size(); i++)
        {
            pref += nums[i];
            int rm = pref - k;
            ans += mp[rm];
            mp[pref]++;
        }
        return ans;
    }
};