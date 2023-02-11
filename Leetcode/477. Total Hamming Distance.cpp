// The Hamming distance between two integers is the number of positions at which the corresponding bits are different.

// Given an integer array nums, return the sum of Hamming distances between all the pairs of the integers in nums.

class Solution {
public:
    int totalHammingDistance(vector<int>& nums) 
    {
        int ans = 0, n = nums.size();
        for(int i = 0; i < 32; i++)
        {
            int count = 0;
            for(int j = 0; j < n; j++)
                count += (nums[j] >> i) & 1;
            ans += count * (n - count);
        }
        return ans;
    }
};