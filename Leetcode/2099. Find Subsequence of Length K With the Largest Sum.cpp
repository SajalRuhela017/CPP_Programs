// You are given an integer array nums and an integer k. You want to find a subsequence of nums of length k that has the largest sum.

// Return any such subsequence as an integer array of length k.

// A subsequence is an array that can be derived from another array by deleting some or no elements without changing the order of the remaining elements.

class Solution {
public:
    bool static cmp(pair<int, int> &a, pair<int, int> &b)
    {
        return a.second < b.second;    
    }
    
    vector<int> maxSubsequence(vector<int>& nums, int k)
    {
        vector<pair<int, int>> vp;
        for(int i = 0; i < nums.size(); i++)
            vp.push_back(make_pair(nums[i], i));
        sort(vp.rbegin(), vp.rend());
        sort(vp.begin(), vp.begin() + k, cmp);
        vector<int> ans;
        int i = 0;
        while(k--)
            ans.push_back(vp[i++].first);
        return ans;
    }
};