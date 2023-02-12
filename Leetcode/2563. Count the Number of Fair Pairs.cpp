// Given a 0-indexed integer array nums of size n and two integers lower and upper, return the number of fair pairs.

// A pair (i, j) is fair if:

// 0 <= i < j < n, and
// lower <= nums[i] + nums[j] <= upper

class Solution {
public:
    long long countLess(vector<int>& nums, int val) 
    {
        long long res = 0;
        for (int i = 0, j = nums.size() - 1; i < j; ++i) 
        {
            while(i < j && nums[i] + nums[j] >= val)
                --j;
            res += j - i;
        }        
        return res;
    }
    
    long long countFairPairs(vector<int>& nums, int lower, int upper) 
    {
        sort(begin(nums), end(nums));
        return countLess(nums, upper+1) - countLess(nums, lower);
    }
};