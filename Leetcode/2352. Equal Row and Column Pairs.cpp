// Given a 0-indexed n x n integer matrix grid, return the number of pairs (ri, cj) such that row ri and column cj are equal.

// A row and column pair is considered equal if they contain the same elements in the same order (i.e., an equal array).

class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) 
    {
        int n = grid.size(), ans = 0;
        map<vector<int> , int> mp;
        for(int i = 0; i < n; i++)
            mp[grid[i]]++;
        for(int i = 0; i < n; i++)
        {
            vector<int> temp;
            for(int j = 0; j < n; j++)
                temp.push_back(grid[j][i]);
            ans += mp[temp];
        }
        return ans;
    }
};