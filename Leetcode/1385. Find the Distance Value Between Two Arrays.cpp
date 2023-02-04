// Given two integer arrays arr1 and arr2, and the integer d, return the distance value between the two arrays.

// The distance value is defined as the number of elements arr1[i] such that there is not any element arr2[j] where |arr1[i]-arr2[j]| <= d.

class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) 
    {
        sort(arr2.begin() , arr2.end());
        int ans = 0;
        for (int n : arr1) 
            if (upper_bound(arr2.begin(), arr2.end(), n + d) == lower_bound(arr2.begin(), arr2.end(), n - d)) 
                ++ans;
        return ans;
    }
};