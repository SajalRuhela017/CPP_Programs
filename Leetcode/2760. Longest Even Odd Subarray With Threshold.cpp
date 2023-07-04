// You are given a 0-indexed integer array nums and an integer threshold.

// Find the length of the longest subarray of nums starting at index l and ending at index r (0 <= l <= r < nums.length) that satisfies the following conditions:

// nums[l] % 2 == 0
// For all indices i in the range [l, r - 1], nums[i] % 2 != nums[i + 1] % 2
// For all indices i in the range [l, r], nums[i] <= threshold
// Return an integer denoting the length of the longest such subarray.

// Note: A subarray is a contiguous non-empty sequence of elements within an array.

class Solution {
public:
    int longestAlternatingSubarray(vector<int>& nums, int threshold)
    {
        int ans = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] & 1)
                continue;
            if(nums[i] <= threshold)
                ans = max(ans, 1);
            for(int j = i + 1; j < nums.size() && nums[j - 1] <= threshold; j++)
            {
                if(nums[j - 1] % 2 != nums[j] % 2 && nums[j] <= threshold)
                    ans = max(ans, j - i + 1);
                else
                    break;
            }
        }
        return ans;
    }
};