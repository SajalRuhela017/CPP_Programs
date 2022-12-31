// Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) 
    {   
        unordered_set<int> s(nums.begin() , nums.end());
        return !(s.size() == nums.size());       
    }
};