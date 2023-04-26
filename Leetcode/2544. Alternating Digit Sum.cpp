// You are given a positive integer n. Each digit of n has a sign according to the following rules:

// The most significant digit is assigned a positive sign.
// Each other digit has an opposite sign to its adjacent digits.
// Return the sum of all digits with their corresponding sign.

class Solution {
public:
    int alternateDigitSum(int n)
    {
        int digits = floor(log10(n) + 1), sum = 0;
        bool sign = (digits & 1);
        while(n)
        {
            sum += (sign ? n % 10 : -(n % 10));
            n /= 10;
            sign = !sign;
        }
        return sum;
    }
};