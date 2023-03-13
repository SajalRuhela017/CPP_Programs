// You are given a 0-indexed integer array nums. In one operation, you can:

// Choose two different indices i and j such that 0 <= i, j < nums.length.
// Choose a non-negative integer k such that the kth bit (0-indexed) in the binary representation of nums[i] and nums[j] is 1.
// Subtract 2k from nums[i] and nums[j].
// A subarray is beautiful if it is possible to make all of its elements equal to 0 after applying the above operation any number of times.

// Return the number of beautiful subarrays in the array nums.

// A subarray is a contiguous non-empty sequence of elements within an array.

class Solution {
public:
    long long beautifulSubarrays(vector<int>& nums) 
    {
        long long n = nums.size(), ans = 0;
        vector<long long> prefix_xor(n);
        prefix_xor[0] = nums[0];
        for(int i = 1; i < n; i++)
            prefix_xor[i] = prefix_xor[i - 1] ^ nums[i];
        unordered_map<long long , long long> mp;
        mp[0] = 1;
        for(int i = 0; i < n; i++)
        {
            if(mp[prefix_xor[i]])
                ans += mp[prefix_xor[i]];
            mp[prefix_xor[i]]++;
        }
        return ans;
    }
};