// You are given a 0-indexed integer array tasks, where tasks[i] represents the difficulty level of a task. In each round, you can complete either 2 or 3 tasks of the same difficulty level.

// Return the minimum rounds required to complete all the tasks, or -1 if it is not possible to complete all the tasks.

class Solution {
public:
    int minimumRounds(vector<int>& tasks) 
    {
        unordered_map<int , int> mp;
        int ans = 0, freq;
        for(auto i : tasks)
            mp[i]++;
        for(auto it : mp)
        {
            if(it.second == 1)  return -1;
            ans += (it.second + 2) / 3;
        }
        return ans;
    }
};