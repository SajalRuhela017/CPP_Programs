// You are given an integer array nums sorted in non-decreasing order.

// Build and return an integer array result with the same length as nums such that result[i] is equal to the summation of absolute differences between nums[i] and all the other elements in the array.

// In other words, result[i] is equal to sum(|nums[i]-nums[j]|) where 0 <= j < nums.length and j != i (0-indexed).

class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums)
     {
        int n = nums.size();
        vector<int> ans;
        int sum = accumulate(nums.begin(), nums.end(), 0);
        int diff = 0;
        for(int i = 0; i < n; i++)
        {
            int res = abs(sum - (n - i) * nums[i] + i * nums[i] - diff);
            sum -= nums[i];
            diff += nums[i];
            ans.push_back(res);
        }
        return ans;
    }
};