// Given an integer array nums of size n, return the minimum number of moves required to make all array elements equal.

// In one move, you can increment or decrement an element of the array by 1.

// Test cases are designed so that the answer will fit in a 32-bit integer.

class Solution {
public:
    int minMoves2(vector<int>& nums) 
    {
        long long ans = 0, median = 0, n = nums.size();
        sort(nums.begin() , nums.end());
        median = nums[n / 2];
        for(int i = 0; i < nums.size(); i++)
            ans += abs(nums[i] - median);
        return ans;
    }
};