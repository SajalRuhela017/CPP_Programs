// You are given an array nums consisting of positive integers.

// We call a subarray of nums nice if the bitwise AND of every pair of elements that are in different positions in the subarray is equal to 0.

// Return the length of the longest nice subarray.

// A subarray is a contiguous part of an array.

// Note that subarrays of length 1 are always considered nice.

class Solution {
public:
    int longestNiceSubarray(vector<int>& nums)
    {
        int i = 0, ans = 0, temp = 0;
        for(int j = 0; j < nums.size(); j++)
        {
            while(temp & nums[j] > 0)
                temp ^= nums[i++];
            temp |= nums[j];
            ans = max(ans, j - i + 1);
        }
        return ans;
    }
};