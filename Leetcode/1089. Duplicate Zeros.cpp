// Given a fixed-length integer array arr, duplicate each occurrence of zero, shifting the remaining elements to the right.

// Note that elements beyond the length of the original array are not written. Do the above modifications to the input array in place and do not return anything.

class Solution {
public:
    void duplicateZeros(vector<int>& arr) 
    {
        vector<int> temp = arr;
        int n = arr.size(), i = 0, j = 0;
        arr.clear();
        while(j < n)
        {
            arr.push_back(temp[i]);
            j++;
            if(temp[i] == 0 && j < n)    arr.push_back(0) , j++;
            i++;
        }
    }
};