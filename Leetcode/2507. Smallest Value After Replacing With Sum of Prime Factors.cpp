// You are given a positive integer n.

// Continuously replace n with the sum of its prime factors.

// Note that if a prime factor divides n multiple times, it should be included in the sum as many times as it divides n.
// Return the smallest value n will take on.

class Solution {
public:
    long long primeFactors(int n)
    {
        long long divisor = 2, ans = 0;
        while(n > 1)
        {
            while(n % divisor == 0)
            {
                ans += divisor;
                n /= divisor;   
            }
                divisor++;
        }
        return ans;
    }

    int smallestValue(int n) 
    {
        while(true)
        {
            long long sumOfFactors = primeFactors(n);
            if(sumOfFactors == n)
                break;
            n = sumOfFactors;
        }
        return n; 
    }
};