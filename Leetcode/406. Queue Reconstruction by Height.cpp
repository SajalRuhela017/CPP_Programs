// You are given an array of people, people, which are the attributes of some people in a queue (not necessarily in order). Each people[i] = [hi, ki] represents the ith person of height hi with exactly ki other people in front who have a height greater than or equal to hi.

// Reconstruct and return the queue that is represented by the input array people. The returned queue should be formatted as an array queue, where queue[j] = [hj, kj] is the attributes of the jth person in the queue (queue[0] is the person at the front of the queue).

class Solution {
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) 
    {
        sort(people.begin(), people.end(), cmp);
        vector<vector<int>> res;
        for(int i = 0; i < people.size(); i++)
            res.insert(res.begin() + people[i][1], people[i]);
        return res;
    }
    
    static bool cmp(vector<int>& p1, vector<int>& p2)
    {
        if(p1[0] != p2[0])    return p1[0]>p2[0];
        else    return p1[1] < p2[1];
    }
};