// Given an integer array arr, return true if there are three consecutive odd numbers in the array. Otherwise, return false.

class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) 
    {
        int count = 0;
        for(int i = 0; i < arr.size() && count < 3; i++)
            count = (arr[i] & 1 ? count + 1 : 0);
        return count == 3;    
    }
};