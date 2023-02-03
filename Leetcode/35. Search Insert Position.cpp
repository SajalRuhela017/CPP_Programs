// Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

// You must write an algorithm with O(log n) runtime complexity.

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) 
    {
        int n = nums.size(), s = 0, e = n;
        while(s < e)
        {
            int m = (s + e) / 2;
            if(nums[m] >= target)
                e = m;
            else
                s = m + 1;
        }    
        return s;
    }
};