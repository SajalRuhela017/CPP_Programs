// Given an array of integers nums and an integer k. A continuous subarray is called nice if there are k odd numbers on it.

// Return the number of nice sub-arrays.

class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k)
    {
        unordered_map<int, int> mp;
        mp[0] = 1;
        int csum = 0, ans = 0;
        for(auto &i: nums)
        {
            csum += i & 1;
            if(mp.find(csum - k) != mp.end())
                ans += mp[csum - k];
            mp[csum]++;
        }
        return ans;
    }
};