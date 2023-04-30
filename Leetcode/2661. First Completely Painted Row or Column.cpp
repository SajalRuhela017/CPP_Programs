// You are given a 0-indexed integer array arr, and an m x n integer matrix mat. arr and mat both contain all the integers in the range [1, m * n].

// Go through each index i in arr starting from index 0 and paint the cell in mat containing the integer arr[i].

// Return the smallest index i at which either a row or a column will be completely painted in mat.

class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat)
    {
        int n = mat.size(), m = mat[0].size();
        vector<int> row(n, 0), col(m, 0);
        map<int, vector<int>> mp;
        for(int j = 0, i = 0; j < mat.size() && i < arr.size(); j++)
        {
            for(int k = 0; k < mat[0].size(); k++)
            {
                vector<int> temp = {j, k};
                mp[mat[j][k]] = temp;
                while(mp.find(arr[i]) != mp.end() && i < arr.size())
                {
                    row[mp[arr[i]][0]]++;
                    col[mp[arr[i]][1]]++;
                    if(row[mp[arr[i]][0]] == m || col[mp[arr[i]][1]] == n)
                        return i;
                    i++;
                }
            }
        }
        return m * n - 1;
    }
};