// A sequence of numbers is called an arithmetic progression if the difference between any two consecutive elements is the same.

// Given an array of numbers arr, return true if the array can be rearranged to form an arithmetic progression. Otherwise, return false.

class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) 
    {
        unordered_set<int> s(arr.begin() , arr.end());
        if(s.size() == 1)           return true;
        if(s.size() < arr.size())   return false;
        int mx = *max_element(arr.begin() , arr.end());  
        int mn = *min_element(arr.begin() , arr.end());
        int diff = (mx - mn) / (arr.size() - 1);
        for(int i = 1; i < arr.size(); i++)
            if(!s.count(mn + i * diff))     return false;
        return true;
    }
};