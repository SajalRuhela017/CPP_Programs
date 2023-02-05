// Given an integer num, return the number of digits in num that divide num.

// An integer val divides nums if nums % val == 0.

class Solution {
public:
    int countDigits(int num) 
    {
        int n = num, ans = 0;
        while(n)
        {
            int x = n % 10;
            if(num % x == 0)    ans++;
            n /= 10;
        }
        return ans;
    }
};