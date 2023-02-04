// Given an array of positive integers nums, return an array answer that consists of the digits of each integer in nums after separating them in the same order they appear in nums.

// To separate the digits of an integer is to get all the digits it has in the same order.

// For example, for the integer 10921, the separation of its digits is [1,0,9,2,1].

class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) 
    {
        vector<int> ans;
        for(int i = 0; i < nums.size(); i++)
        {
            int n = nums[i];
            vector<int> temp;
            while(n)
            {
                temp.push_back(n % 10);
                n /= 10;
            }
            int s = temp.size();
            for(int j = 0; j < s; j++)
            {
                ans.push_back(temp[s - j - 1]);
            }
        }
        return ans;
    }
};