// There is an n x n grid, with the top-left cell at (0, 0) and the bottom-right cell at (n - 1, n - 1). You are given the integer n and an integer array startPos where startPos = [startrow, startcol] indicates that a robot is initially at cell (startrow, startcol).

// You are also given a 0-indexed string s of length m where s[i] is the ith instruction for the robot: 'L' (move left), 'R' (move right), 'U' (move up), and 'D' (move down).

// The robot can begin executing from any ith instruction in s. It executes the instructions one by one towards the end of s but it stops if either of these conditions is met:

// The next instruction will move the robot off the grid.
// There are no more instructions left to execute.
// Return an array answer of length m where answer[i] is the number of instructions the robot can execute if the robot begins executing from the ith instruction in s.

class Solution {
public:
    vector<int> executeInstructions(int n, vector<int>& startPos, string s) 
    {
        vector<int> ans;
        int m = s.size();
        for(int i = 0; i < m; i++)
        {
            int count = 0, x = startPos[1], y = startPos[0];
            for(int j = i; j < m; j++)
            {
                switch(s[j])
                {
                    case 'R':
                        x++;
                        break;
                    
                    case 'L':
                        x--;
                        break;

                    case 'D':
                        y++;
                        break;
                    
                    case 'U':
                        y--;
                        break;
                }
                if(x >= 0 && x < n && y >= 0 && y < n)  count++;
                else    break;
            }
            ans.push_back(count);
        }
        return ans;    
    }
};