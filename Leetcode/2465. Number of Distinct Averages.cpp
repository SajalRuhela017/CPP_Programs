// You are given a 0-indexed integer array nums of even length.

// As long as nums is not empty, you must repetitively:

// Find the minimum number in nums and remove it.
// Find the maximum number in nums and remove it.
// Calculate the average of the two removed numbers.
// The average of two numbers a and b is (a + b) / 2.

// For example, the average of 2 and 3 is (2 + 3) / 2 = 2.5.
// Return the number of distinct averages calculated using the above process.

// Note that when there is a tie for a minimum or maximum number, any can be removed.

class Solution {
public:
    int distinctAverages(vector<int>& nums) 
    {
        int n = nums.size();
        set<int> s;
        sort(nums.begin() , nums.end());
        for(int i = 0; i < n / 2; i++)
            s.insert(nums[i] + nums[n - i - 1]);
        return s.size();
    }
};