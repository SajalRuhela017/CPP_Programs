// The power of an integer x is defined as the number of steps needed to transform x into 1 using the following steps:

// if x is even then x = x / 2
// if x is odd then x = 3 * x + 1
// For example, the power of x = 3 is 7 because 3 needs 7 steps to become 1 (3 --> 10 --> 5 --> 16 --> 8 --> 4 --> 2 --> 1).

// Given three integers lo, hi and k. The task is to sort all integers in the interval [lo, hi] by the power value in ascending order, if two or more integers have the same power value sort them by ascending order.

// Return the kth integer in the range [lo, hi] sorted by the power value.

// Notice that for any integer x (lo <= x <= hi) it is guaranteed that x will transform into 1 using these steps and that the power of x is will fit in a 32-bit signed integer.

class Solution {
public:
    int getKth(int lo, int hi, int k) 
    {
        vector<pair<int , int>> dp;
        for(int i = lo; i <= hi; i++)
        {
            int op = 0, num = i;
            while(num != 1)
            {
                if(num & 1)
                    num = 3 * num + 1;
                else
                    num /= 2;
                op++;
            }
            dp.push_back(make_pair(op , i));
        }
        sort(dp.begin() , dp.end());
        return dp[k - 1].second;
    }
};