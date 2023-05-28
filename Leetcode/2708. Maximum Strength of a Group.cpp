// You are given a 0-indexed integer array nums representing the score of students in an exam. The teacher would like to form one non-empty group of students with maximal strength, where the strength of a group of students of indices i0, i1, i2, ... , ik is defined as nums[i0] * nums[i1] * nums[i2] * ... * nums[ik​].

// Return the maximum strength of a group the teacher can create.

class Solution {
public:
    long long maxStrength(vector<int>& nums)
    {
        if(nums.size() == 1)
            return nums[0];
        long long ans = 0, neg = 0;
        if(nums.size() == 2)
            return max(nums[0] * nums[1], max(nums[0], nums[1]));
        for(int i = 0; i < nums.size(); i++)
        {
            neg += (nums[i] < 0);
            if(nums[i] > 0 || neg > 1)
            {
                ans = 1;
                break;
            }
        }
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] != 0)
                ans *= nums[i];
        }
        if(ans > 0)
            return ans;
        long long mx_neg = INT_MIN;
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] < 0)
                mx_neg = max(mx_neg, 1LL * nums[i]);
        }
        ans /= mx_neg;
        return ans;
    }
};