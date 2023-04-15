// Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.

class Solution {
public:
    int missingNumber(vector<int>& nums)
    {
        int ans = nums.size();
        for(int i = 0; i < nums.size(); i++)
        {
            ans ^= i;
            ans ^= nums[i];
        }
        return ans;
    }
};