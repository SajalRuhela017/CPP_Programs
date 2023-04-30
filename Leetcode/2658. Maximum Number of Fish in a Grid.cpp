// You are given a 0-indexed 2D matrix grid of size m x n, where (r, c) represents:

// A land cell if grid[r][c] = 0, or
// A water cell containing grid[r][c] fish, if grid[r][c] > 0.
// A fisher can start at any water cell (r, c) and can do the following operations any number of times:

// Catch all the fish at cell (r, c), or
// Move to any adjacent water cell.
// Return the maximum number of fish the fisher can catch if he chooses his starting cell optimally, or 0 if no water cell exists.

// An adjacent cell of the cell (r, c), is one of the cells (r, c + 1), (r, c - 1), (r + 1, c) or (r - 1, c) if it exists.

class Solution {
public:
    int findMaxFish(vector<vector<int>>& grid)
    {
        int m = grid.size(), n = grid[0].size(), ans = 0, count = 0;
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                count += grid[i][j];
                if(grid[i][j])
                {
                    queue<pair<int, int>> q;
                    vector<vector<int>> dp(m, vector<int>(n));
                    q.push(make_pair(i, j));
                    dp[i][j] = 1;
                    int sum = 0, mx = INT_MIN, check = 0;
                    vector<int> temp = {-1, 0, 1, 0, -1};
                    while(!q.empty())
                    {
                        int r = q.front().first, c = q.front().second;
                        q.pop();
                        sum += grid[r][c];
                        for(int k = 0; k < 4; k++)
                        {
                            priority_queue<int, vector<int>, greater<int>> pq;
                            int x = r + temp[k], y = c + temp[k + 1];
                            if(x >= 0 && x < m && y >= 0 && y < n && grid[x][y] && dp[x][y] == 0)
                            {
                                q.push(make_pair(x, y));
                                dp[x][y] = 1;
                                check++;
                            }
                            count += check;
                        }
                        check = 0;
                    }
                    ans = max(ans, sum);
                    int okay = check;
                }
            }
        }
        count--;
        count = (count + 1) / 2;
        return ans;
    }
};