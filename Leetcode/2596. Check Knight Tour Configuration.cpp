// There is a knight on an n x n chessboard. In a valid configuration, the knight starts at the top-left cell of the board and visits every cell on the board exactly once.

// You are given an n x n integer matrix grid consisting of distinct integers from the range [0, n * n - 1] where grid[row][col] indicates that the cell (row, col) is the grid[row][col]th cell that the knight visited. The moves are 0-indexed.

// Return true if grid represents a valid configuration of the knight's movements or false otherwise.

// Note that a valid knight move consists of moving two squares vertically and one square horizontally, or two squares horizontally and one square vertically. The figure below illustrates all the possible eight moves of a knight from some cell.

class Solution {
public:
    bool checkValidGrid(vector<vector<int>>& grid) 
    {
        int ans = 1, a = 0, b = 0, n = grid.size();
        while(a < n && b < n && a >= 0 && b >= 0)
        {
            if(a + 2 < n && b + 1 < n && grid[a + 2][b + 1] == ans)
            {
                ans++;
                a += 2;
                b++;
            }
            else if(a + 1 < n && b + 2 < n && grid[a + 1][b + 2] == ans)
            {
                ans++;
                a++;
                b += 2;
            }
            else if(a + 2 < n && b - 1 >= 0 && grid[a + 2][b - 1] == ans)
            {
                ans++;
                a += 2;
                b--;
            }
            else if(a + 1 < n && b - 2 >= 0 && grid[a + 1][b - 2] == ans)
            {
                ans++;
                a++;
                b -= 2;
            }
            else if(a - 1 >= 0 && b - 2 >= 0 && grid[a - 1][b - 2] == ans)
            {
                ans++;
                a--;
                b -= 2;
            }
            else if(a - 1 >= 0 && b + 2 < n && grid[a - 1][b + 2] == ans)
            {
                ans++;
                a--;
                b += 2;
            }
            else if(a - 2 >= 0 && b + 1 < n && grid[a - 2][b + 1] == ans)
            {
                ans++;
                a -= 2;
                b++;
            }
            else if(a - 2 >= 0 && b - 1 >= 0 && grid[a - 2][b - 1] == ans)
            {
                ans++;
                a -= 2;
                b--;
            }
            else
            {
                break;
            }
        }
        return ans == n * n;
    }
};