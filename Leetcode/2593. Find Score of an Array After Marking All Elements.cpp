// You are given an array nums consisting of positive integers.

// Starting with score = 0, apply the following algorithm:

// Choose the smallest integer of the array that is not marked. If there is a tie, choose the one with the smallest index.
// Add the value of the chosen integer to score.
// Mark the chosen element and its two adjacent elements if they exist.
// Repeat until all the array elements are marked.
// Return the score you get after applying the above algorithm.

class Solution {
public:
    static bool comp(pair<long long , long long>& a, pair<long long , long long>& b)
    {
        if(a.first == b.first)
            return a.second < b.second;
        return a.first < b.first;
    }

    long long findScore(vector<int>& nums) 
    {
        long long ans = 0;
        vector<pair<long long , long long>> v;
        for(int i = 0; i < nums.size(); i++)
            v.push_back({nums[i] , i});
        sort(v.begin() , v.end() , comp);
        vector<long long> marked(nums.size() , 0);
        for(int i = 0; i < nums.size(); i++)
        {
            long long a = v[i].first, b = v[i].second;
            if(!marked[b])
            {
                marked[b] = 1;
                ans += a;
                if(b)
                    marked[b - 1] = 1;
                if(b < nums.size() - 1)
                    marked[b + 1] = 1;
            }
        }
        return ans;
    }
};