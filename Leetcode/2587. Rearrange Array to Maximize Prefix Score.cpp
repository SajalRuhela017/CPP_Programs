// You are given a 0-indexed integer array nums. You can rearrange the elements of nums to any order (including the given order).

// Let prefix be the array containing the prefix sums of nums after rearranging it. In other words, prefix[i] is the sum of the elements from 0 to i in nums after rearranging it. The score of nums is the number of positive integers in the array prefix.

// Return the maximum score you can achieve.

class Solution {
public:
    int maxScore(vector<int>& nums) 
    {
        sort(nums.rbegin() , nums.rend());
        long long ans = 0, sum = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];
            if(sum > 0)
                ans++;
            else
                return (int)ans;
        }
        return (int)ans;
    }
};