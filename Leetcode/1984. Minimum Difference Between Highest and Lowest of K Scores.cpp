// class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) 
    {
        sort(nums.begin() , nums.end());
        int n = nums.size(), ans = nums[k - 1] - nums[0];
        for(int i = 0; i <= n - k; i++)
            ans = min(ans , nums[k + i - 1] - nums[i]);
        return ans;
    }
};