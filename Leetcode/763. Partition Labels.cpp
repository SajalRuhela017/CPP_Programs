// You are given a string s. We want to partition the string into as many parts as possible so that each letter appears in at most one part.

// Note that the partition is done so that after concatenating all the parts in order, the resultant string should be s.

// Return a list of integers representing the size of these parts.

class Solution {
public:
    vector<int> partitionLabels(string s) 
    {
        map<char , int> m;
        vector<int> ans;
        for(int i = 0; i < s.size(); i++)
        {
            m[s[i]] = i;
        }
        int mx = 0, prev = -1;
        for(int i = 0; i < s.size(); i++)
        {
            mx = max(mx , m[s[i]]);
            if(mx == i)
            {
                ans.push_back(mx - prev);
                prev = mx;
            }
        }
        return ans;
    }
};