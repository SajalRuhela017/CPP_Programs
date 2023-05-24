// You are given two 0-indexed integer arrays nums1 and nums2 of equal length n and a positive integer k. You must choose a subsequence of indices from nums1 of length k.

// For chosen indices i0, i1, ..., ik - 1, your score is defined as:

// The sum of the selected elements from nums1 multiplied with the minimum of the selected elements from nums2.
// It can defined simply as: (nums1[i0] + nums1[i1] +...+ nums1[ik - 1]) * min(nums2[i0] , nums2[i1], ... ,nums2[ik - 1]).
// Return the maximum possible score.

// A subsequence of indices of an array is a set that can be derived from the set {0, 1, ..., n-1} by deleting some or no elements.

class Solution {
public:
    long long maxScore(vector<int>& nums1, vector<int>& nums2, int k)
    {
        int n = nums1.size();
        vector<pair<int, int>> vp(n);
        for(int i = 0; i < n; i++)
            vp[i] = {nums2[i], nums1[i]};
        sort(vp.rbegin(), vp.rend());
        long long sum = 0, ans = 0;
        priority_queue<int, vector<int>, greater<int>> pq;
        for(auto& [e, s] : vp)
        {
            pq.emplace(s);
            sum += s;
            if(pq.size() > k)
            {
                sum -= pq.top();
                pq.pop();
            }
            if(pq.size() == k)
                ans = max(ans, sum * e);
        }
        return ans;
    }
};