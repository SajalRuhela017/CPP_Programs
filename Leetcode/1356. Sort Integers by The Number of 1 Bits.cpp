// You are given an integer array arr. Sort the integers in the array in ascending order by the number of 1's in their binary representation and in case of two or more integers have the same number of 1's you have to sort them in ascending order.

// Return the array after sorting it.

class Solution {
public:
    int countsetbits(int n)
    {
        int c = 0;
        while(n)
        {
            if(n & 1)
                c++;
            n /= 2;
        }
        return c;
    }
    vector<int> sortByBits(vector<int>& arr) 
    {
        map<int , vector<int>>mp;
        vector<int>v;
        sort(arr.begin() , arr.end());
        for(int i = 0; i < arr.size(); i++)
            mp[countsetbits(arr[i])].push_back(arr[i]);
        for(auto it = mp.begin(); it != mp.end(); it++)
        {
            for(int a : it -> second)
                v.push_back(a);
        }
        return v;
    }
};