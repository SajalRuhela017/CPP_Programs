// We define the conversion array conver of an array arr as follows:

// conver[i] = arr[i] + max(arr[0..i]) where max(arr[0..i]) is the maximum value of arr[j] over 0 <= j <= i.
// We also define the score of an array arr as the sum of the values of the conversion array of arr.

// Given a 0-indexed integer array nums of length n, return an array ans of length n where ans[i] is the score of the prefix nums[0..i].

class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& nums) 
    {
        vector<long long> ans, pref(nums.size());
        pref[0] = 2 * nums[0];
        ans.push_back(pref[0]);
        long long mx = nums[0], sum = nums[0];
        for(int i = 1; i < nums.size(); i++)
        {
            mx = max(mx, 1LL*nums[i]);
            pref[i] = pref[i - 1] + nums[i] + mx;
            ans.push_back(pref[i]);
        }
        return ans;
    }
};