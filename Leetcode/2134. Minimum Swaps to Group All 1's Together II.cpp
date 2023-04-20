// A swap is defined as taking two distinct positions in an array and swapping the values in them.

// A circular array is defined as an array where we consider the first element and the last element to be adjacent.

// Given a binary circular array nums, return the minimum number of swaps required to group all 1's present in the array together at any location.

class Solution {
public:
    int minSwaps(vector<int>& nums) 
    {
        int ones = accumulate(nums.begin(), nums.end(), 0), ans = INT_MAX, n = nums.size(), count = 0;
        for(int i = 0, j = 0; i < nums.size(); i++)
        {
            while(j - i < ones)
                count += (nums[j++ % n] == 0);
            ans = min(ans, count);
            count -= (nums[i] == 0);
        }
        return ans;
    }
};