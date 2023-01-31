// We define a harmonious array as an array where the difference between its maximum value and its minimum value is exactly 1.

// Given an integer array nums, return the length of its longest harmonious subsequence among all its possible subsequences.

// A subsequence of array is a sequence that can be derived from the array by deleting some or no elements without changing the order of the remaining elements.

class Solution {
public:
    int findLHS(vector<int>& nums) 
    {
        int ans = 0;
        unordered_map<int , int> mp;
        for(auto &i : nums)
            mp[i]++;
        for(auto &it : mp)
            if(mp.count(it.first - 1) > 0)
                ans = max(ans , it.second + mp[it.first - 1]);
        return ans;
    }
};