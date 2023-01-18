// Given a circular integer array nums of length n, return the maximum possible sum of a non-empty subarray of nums.

// A circular array means the end of the array connects to the beginning of the array. Formally, the next element of nums[i] is nums[(i + 1) % n] and the previous element of nums[i] is nums[(i - 1 + n) % n].

// A subarray may only include each element of the fixed buffer nums at most once. Formally, for a subarray nums[i], nums[i + 1], ..., nums[j], there does not exist i <= k1, k2 <= j with k1 % n == k2 % n.

class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int total = 0, currMax = 0, currMin = 0, maxSum = nums[0], minSum = nums[0]; 
        for(int i = 0; i < nums.size(); i++)
        {
            currMax = max(currMax + nums[i] , nums[i]);
            maxSum = max(currMax , maxSum);
            currMin = min(currMin + nums[i] , nums[i]);
            minSum = min(currMin , minSum);
            total += nums[i];
        }
        return maxSum > 0 ? max(maxSum , total - minSum) : maxSum;
    }
};