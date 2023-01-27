// You are given a 2D integer array logs where each logs[i] = [birthi, deathi] indicates the birth and death years of the ith person.

// The population of some year x is the number of people alive during that year. The ith person is counted in year x's population if x is in the inclusive range [birthi, deathi - 1]. Note that the person is not counted in the year that they die.

// Return the earliest year with the maximum population.

class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) 
    {
        vector<int> alive(101);
        int ans = 0;
        for(int j = 0; j < logs.size(); j++) 
        {
            alive[logs[j][0] - 1950]++ , alive[logs[j][1] - 1950]--;
        }
        for(int i = 1; i < 101; i++)
        {
            alive[i] += alive[i - 1];
            ans = alive[i] > alive[ans] ? i : ans;
        }
        return ans + 1950;
    }
};