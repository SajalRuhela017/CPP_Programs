// Given an array nums of integers, return how many of them contain an even number of digits.

class Solution {
public:
    int isEven(int num)
    {
        int x = floor(log10(num) + 1);
        return !(x & 1);
    }
    int findNumbers(vector<int>& nums) 
    {
        int ans = 0;
        for(int i = 0; i < nums.size(); i++)
            ans += isEven(nums[i]);
        return ans;
    }
};