// You are given a 0-indexed string blocks of length n, where blocks[i] is either 'W' or 'B', representing the color of the ith block. The characters 'W' and 'B' denote the colors white and black, respectively.

// You are also given an integer k, which is the desired number of consecutive black blocks.

// In one operation, you can recolor a white block such that it becomes a black block.

// Return the minimum number of operations needed such that there is at least one occurrence of k consecutive black blocks.

class Solution {
public:
    int minimumRecolors(string blocks, int k) 
    {
        int count = 0, ans = 0;
        for(int i = 0; i < k; i++)
            if(blocks[i] == 'W')     count++;

        ans = count;

        for(int i = 1; i <= blocks.size() - k; i++)
        {
            if(blocks[i - 1] != blocks[i + k - 1])
            {
                if(blocks[i - 1] == 'B')
                    count++;
                else
                    count--;
            }
            if(count == 0)  
                return 0;
            ans = min(ans , count);
        }
        return ans;    
    }
};