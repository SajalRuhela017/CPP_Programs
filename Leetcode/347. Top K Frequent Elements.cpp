// Given an integer array nums and an integer k, return the k most frequent elements. You may return the answer in any order.

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) 
    {
        unordered_map<int , int> mp;
        for(int i = 0; i < nums.size(); i++)
            mp[nums[i]]++;

        priority_queue< pair<int , int>> pq;
        vector<int> ans;

        for(auto i = mp.begin(); i != mp.end(); i++)
        {
            pq.push(make_pair(i->second , i-> first));
            if(pq.size() > (int)mp.size() - k)
            {
                ans.push_back(pq.top().second);
                pq.pop();
            }
        }
        return ans;
    }
};