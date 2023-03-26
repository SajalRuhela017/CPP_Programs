// Given an unsorted array of integers nums, return the length of the longest consecutive elements sequence.

// You must write an algorithm that runs in O(n) time.

class Solution {
public:
    int longestConsecutive(vector<int>& nums) 
    {
        unordered_set<int> st;
        int ans = 0, currStreak = 0;
        for(int i = 0; i < nums.size(); i++)
            st.insert(nums[i]);
        for(int i = 0; i < nums.size(); i++)
        {
            if(!st.count(nums[i] - 1))
            {
                int currVal = nums[i];
                currStreak = 1;
                while(st.count(++currVal))
                    currStreak++;
                ans = max(currStreak , ans);
            }
        }
        return  ans;
    }
};