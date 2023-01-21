// You are given an array nums of non-negative integers. nums is considered special if there exists a number x such that there are exactly x numbers in nums that are greater than or equal to x.

// Notice that x does not have to be an element in nums.

// Return x if the array is special, otherwise, return -1. It can be proven that if nums is special, the value for x is unique.

class Solution {
public:
    int specialArray(vector<int>& nums) 
    {
        int count[102] = {0}, N = nums.size();
        for (int n : nums) 
            count[min(n, N)]++;
        for (int i = N; i >= 0; i--) 
        {
            count[i] += count[i + 1];
            if (count[i] == i) 
                return i;
        }
        return -1;
    }
};