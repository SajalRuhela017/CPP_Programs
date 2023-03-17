// Given an integer array of size n, find all elements that appear more than ⌊ n/3 ⌋ times.

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) 
    {
        vector<int> ans;
        int x = nums.size() / 3;
        unordered_map<int , int> mp;
        for(int i = 0; i < nums.size(); i++)
            mp[nums[i]]++;
        for(auto it : mp)
        {
            if(it.second > x)
                ans.push_back(it.first);
        }
        return ans;
    }
};