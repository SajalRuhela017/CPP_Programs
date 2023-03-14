// Given an integer array nums, return the greatest common divisor of the smallest number and largest number in nums.

// The greatest common divisor of two numbers is the largest positive integer that evenly divides both numbers.

class Solution {
public:
    int findGCD(vector<int>& nums) 
    {
        int mx = 0, mn = 1001;
        for(int i = 0; i < nums.size(); i++)
        {
            mx = max(mx , nums[i]);
            mn = min(mn , nums[i]);
        }
        return __gcd(mn , mx);
    }
};