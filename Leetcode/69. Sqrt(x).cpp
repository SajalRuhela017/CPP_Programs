class Solution {
public:
    int mySqrt(int x) 
    {
        long long i = 1;
        while(i * i <= x)    
            i++;
        return (int)--i;
    }
};