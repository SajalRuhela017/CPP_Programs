// There exists an infinitely large two-dimensional grid of uncolored unit cells. You are given a positive integer n, indicating that you must do the following routine for n minutes:

// At the first minute, color any arbitrary unit cell blue.
// Every minute thereafter, color blue every uncolored cell that touches a blue cell.

// Return the number of colored cells at the end of n minutes.

class Solution {
public:
    long long coloredCells(int n) 
    {
        long long x = n;
        long long ans = (2 * x * x) - 2 * x + 1;
        return ans;
    }
};