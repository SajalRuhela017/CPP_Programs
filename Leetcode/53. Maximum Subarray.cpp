class Solution {
public:
    int maxSubArray(vector<int>& nums) 
    {
        int ans = INT_MIN, mx = 0;
        for(int i = 0; i < nums.size(); i++)    
        {
            mx += nums[i];
            if(mx > ans)    ans = mx;
            if(mx < 0)      mx = 0;
        }
        return ans;
    }
};