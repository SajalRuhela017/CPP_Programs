// You are given a 0-indexed integer array nums.

// We say that an integer x is expressible from nums if there exist some integers 0 <= index1 < index2 < ... < indexk < nums.length for which nums[index1] | nums[index2] | ... | nums[indexk] = x. In other words, an integer is expressible if it can be written as the bitwise OR of some subsequence of nums.

// Return the minimum positive non-zero integer that is not expressible from nums.

class Solution {
public:
    int minImpossibleOR(vector<int>& nums) 
    {
        int n = nums.size(), i = 1;
        map<int , int> mp;
        vector<int> temp(n);
        sort(nums.begin() , nums.end());
        while(true)
        {
            int count = 0;
            for(int j = 0; j < n; j++)
            {
                if(nums[j] == i)
                    count++;
            }
            if(!count)
                return i;
            i *= 2;
        }
        return 0;
    }
};