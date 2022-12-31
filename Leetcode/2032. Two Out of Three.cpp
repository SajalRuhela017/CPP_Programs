// Given three integer arrays nums1, nums2, and nums3, return a distinct array containing all the values that are present in at least two out of the three arrays. You may return the values in any order.

class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) 
    {
        bool freq[3][101] = {};
        for(int i = 0; i < nums1.size(); i++)
        {
            freq[0][nums1[i]] = true;
        }   
        for(int i = 0; i < nums2.size(); i++)
        {
            freq[1][nums2[i]] = true;
        } 
        for(int i = 0; i < nums3.size(); i++)
        {
            freq[2][nums3[i]] = true;
        } 
        vector<int> ans;
        for(int i = 1; i <= 100; i++)
        {
            if(freq[0][i] + freq[1][i] + freq[2][i] > 1)
            {
                ans.push_back(i);
            }
        } 
        return ans;
    }
};