// Given a 0-indexed 2D grid of size m x n, you should find the matrix answer of size m x n.

// The value of each cell (r, c) of the matrix answer is calculated in the following way:

// Let topLeft[r][c] be the number of distinct values in the top-left diagonal of the cell (r, c) in the matrix grid.
// Let bottomRight[r][c] be the number of distinct values in the bottom-right diagonal of the cell (r, c) in the matrix grid.
// Then answer[r][c] = |topLeft[r][c] - bottomRight[r][c]|.

// Return the matrix answer.

// A matrix diagonal is a diagonal line of cells starting from some cell in either the topmost row or leftmost column and going in the bottom-right direction until reaching the matrix's end.

// A cell (r1, c1) belongs to the top-left diagonal of the cell (r, c), if both belong to the same diagonal and r1 < r. Similarly is defined bottom-right diagonal.

class Solution {
public:
    vector<vector<int>> differenceOfDistinctValues(vector<vector<int>>& grid)
    {
        int m = grid.size(), n = grid[0].size();
        vector<vector<int>> ans(m, vector<int>(n));
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                unordered_set<int> left, right;
                int x = j - 1, y = i - 1;
                while(x >= 0 && y >= 0)
                {
                    left.insert(grid[y][x]);
                    x--, y--;
                }
                x = j + 1, y = i + 1;
                while(x < n && y < m)
                {
                    right.insert(grid[y][x]);
                    x++, y++;
                }
                x = left.size();
                y = right.size();
                ans[i][j] = abs(x - y);
            }
        }
        return ans;
    }
};