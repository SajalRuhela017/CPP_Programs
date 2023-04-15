// Given an array of strings words and an integer k, return the k most frequent strings.

// Return the answer sorted by the frequency from highest to lowest. Sort the words with the same frequency by their lexicographical order.

class comp {
    public:
    bool operator() (const pair<int, string> &a, const pair<int, string> &b)
    {
        if(a.first == b.first)
            return a.second < b.second;

        return a.first > b.first;
    }
};

class Solution {
public:    
    vector<string> topKFrequent(vector<string>& words, int k)
    {
        vector<string> ans;
        map<string, int> mp;
        for(int i = 0; i < words.size(); i++)
            mp[words[i]]++;
        
        priority_queue<pair<int, string>, vector<pair<int, string>>, comp> pq;
        for(auto &i: mp)
            pq.push(make_pair(i.second, i.first));

        int extra = pq.size() - k;
        for(int i = 0; i < extra; i++)
            pq.pop();

        while(k--)
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};