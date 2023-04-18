// Given an integer array nums with possible duplicates, randomly output the index of a given target number. You can assume that the given target number must exist in the array.

// Implement the Solution class:

// Solution(int[] nums) Initializes the object with the array nums.
// int pick(int target) Picks a random index i from nums where nums[i] == target. If there are multiple valid i's, then each index should have an equal probability of returning.

class Solution {
public:
    vector<int> temp;
    Solution(vector<int>& nums) 
    {
        temp = nums;
    }
    
    int pick(int target) 
    {
        int n = 0, ans = -1;
        for (int i = 0; i < temp.size(); i++) 
        {
            if(temp[i] != target)
                continue;
            n++;
            if(random() % n == 0)
                ans = i;
        }
        return ans;
    }
};