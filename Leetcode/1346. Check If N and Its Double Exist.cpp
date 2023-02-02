// Given an array arr of integers, check if there exist two indices i and j such that :

// i != j
// 0 <= i, j < arr.length
// arr[i] == 2 * arr[j]

class Solution {
public:
    bool checkIfExist(vector<int>& arr) 
    {
        unordered_map<int , int> mp;
        for(int i = 0; i < arr.size(); i++)
        {
            mp[arr[i]]++;
            if(mp.find(arr[i] * 2) != mp.end() || (arr[i] % 2 == 0 && mp.find(arr[i] / 2) != mp.end()))
                return true;
        }
        return false;
    }
};