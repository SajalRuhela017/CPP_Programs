// Given a non-negative integer c, decide whether there're two integers a and b such that a2 + b2 = c.

class Solution {
public:
    bool judgeSquareSum(int c) 
    {
        long long i = 0, j = sqrt(c);
        if(j * j == c)  return true;
        while(i <= j)
        {
            long long result = i * i + j * j;
            if(result == c)  return true;
            else if(result > c)     j--;
            else    i++;
        }
        return false; 
    }
};