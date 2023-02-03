// We are playing the Guess Game. The game is as follows:

// I pick a number from 1 to n. You have to guess which number I picked.

// Every time you guess wrong, I will tell you whether the number I picked is higher or lower than your guess.

// You call a pre-defined API int guess(int num), which returns three possible results:

// -1: Your guess is higher than the number I picked (i.e. num > pick).
// 1: Your guess is lower than the number I picked (i.e. num < pick).
// 0: your guess is equal to the number I picked (i.e. num == pick).
// Return the number that I picked.

class Solution {
public:
    int guessNumber(int n) 
    {
        int mx = n, mn = 1;
        while(true)
        {
            int mean = (mx - mn) / 2 + mn;
            int ans = guess(mean);
            if(ans == 0)
            {
                return mean;
            }
            else if(ans == 1)
            {
                mn = mean + 1;
            }
            else
            {
                mx = mean - 1;
            }
        }
    }
};