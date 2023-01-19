// You are given an array nums consisting of positive integers.

// You have to take each integer in the array, reverse its digits, and add it to the end of the array. You should apply this operation to the original integers in nums.

// Return the number of distinct integers in the final array.

class Solution {
public:
    int reverseDigits(int x)
    {
        int ans = 0;
        while(x)
        {
            int rem = x % 10;
            ans *= 10;
            ans += rem;
            x /= 10;
        }
        return ans;
    }

    int countDistinctIntegers(vector<int>& nums) 
    {
        int n = nums.size();
        set<int> s;
        for(int i = 0; i < n; i++)
            nums.push_back(reverseDigits(nums[i]));
        for(int i = 0; i < 2 * n; i++)
            s.insert(nums[i]);    
        return s.size();
    }
};