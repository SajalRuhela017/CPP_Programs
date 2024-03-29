// Given a non-empty array of non-negative integers nums, the degree of this array is defined as the maximum frequency of any one of its elements.
// Your task is to find the smallest possible length of a (contiguous) subarray of nums, that has the same degree as nums.

class Solution {
public:
    int findShortestSubArray(vector<int>& nums) 
    {
        vector<int> temp = nums;
        sort(temp.begin() , temp.end());
        int count = 1, mx = 1, ans = INT_MAX;
        for(int i = 1; i < temp.size(); i++)
        {
            if(temp[i] == temp[i - 1])
            {
                count++;
                mx = max(mx , count);
            }
            else
                count = 1;
        }
        vector<int> index(50000 , -1);
        map<int , int> mp;
        for(int i = 0; i < nums.size(); i++)
        {
            if(index[nums[i]] == -1)   index[nums[i]] = i;
            mp[nums[i]]++;
            if(mp[nums[i]] == mx)
                ans = min(ans , i - index[nums[i]] + 1);
        } 
        return ans;
    }
};