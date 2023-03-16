// Given an array of positive integers nums and a positive integer target, return the minimal length of a 
// subarray whose sum is greater than or equal to target. If there is no such subarray, return 0 instead.

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums)
    {
        int l = 0, r = 0, n = nums.size(), sum = 0, ans = INT_MAX;
        while(r < n)
        {
            sum += nums[r++];
            while(sum >= target)
            {
                ans = min(ans , r - l);
                sum -= nums[l++];
            }
        }
        if(ans == INT_MAX)
            return 0;
        return ans;
    }
};