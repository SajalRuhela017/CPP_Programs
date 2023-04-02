// Given two arrays of unique digits nums1 and nums2, return the smallest number that contains at least one digit from each array.

class Solution {
public:
    int minNumber(vector<int>& nums1, vector<int>& nums2) 
    {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin() , nums2.end());
        int ans = INT_MAX;
        for(int i = 0; i < nums1.size(); i++)
        {
            for(int j = 0; j < nums2.size(); j++)
            {
                if(nums1[i] == nums2[j])
                {
                    ans = nums1[i];
                    break;
                }
            }
            if(ans < 10)
                break;
        }
        int a = min(nums1[0] , nums2[0]) * 10 + max(nums1[0] , nums2[0]);
        return min(a, ans);
    }
};