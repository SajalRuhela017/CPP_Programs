// Given an array of integers arr and two integers k and threshold, return the number of sub-arrays of size k and average greater than or equal to threshold.

class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) 
    {
        int avg = 0, count = 0, sum = 0;
        for(int i = 0; i < k; i++)
            sum += arr[i];
        avg = sum / k;
        count = (avg >= threshold) ? 1 : 0;
        for(int i = k; i < arr.size(); i++)
        {
            sum -= arr[i - k];
            sum += arr[i];
            avg = sum / k;
            if(avg >= threshold)     count++;
        }
        return count;
    }
};