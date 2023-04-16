// You are given two 0-indexed integer arrays nums and divisors.

// The divisibility score of divisors[i] is the number of indices j such that nums[j] is divisible by divisors[i].

// Return the integer divisors[i] with the maximum divisibility score. If there is more than one integer with the maximum score, return the minimum of them.

class Solution {
public:
    int maxDivScore(vector<int>& nums, vector<int>& divisors) 
    {
        int num = divisors[0], score = 0, curr = 0;
        for(int i = 0; i < divisors.size(); i++)
        {
            score = 0;
            for(int j = 0; j < nums.size(); j++)
            {
                if(nums[j] % divisors[i] == 0)
                    score++;
            }
            if(score == curr)
                num = min(num, divisors[i]);
            if(score > curr)
            {
                curr = score;
                num = divisors[i];
            }
        }
        return num;
    }
};