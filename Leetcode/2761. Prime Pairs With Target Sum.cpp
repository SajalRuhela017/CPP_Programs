// You are given an integer n. We say that two integers x and y form a prime number pair if:

// 1 <= x <= y <= n
// x + y == n
// x and y are prime numbers
// Return the 2D sorted list of prime number pairs [xi, yi]. The list should be sorted in increasing order of xi. If there are no prime number pairs at all, return an empty array.

// Note: A prime number is a natural number greater than 1 with only two factors, itself and 1.

class Solution {
public:
    void sieveOfEratosthenes(int n, vector<bool> &isPrime)
    {
        for(int i = 2; i * i <= n; i++)
        {
            if(isPrime[i])
            {
                for(int j = i * i; j <= n; j += i)
                    isPrime[j] = false;
            }
        }
    }

    vector<vector<int>> findPrimePairs(int n)
    {
        vector<bool> isPrime(n + 1, true);
        sieveOfEratosthenes(n, isPrime);
        vector<vector<int>> ans;
        for(int i = 2; i + i <= n; i++)
        {
            if(isPrime[i])
            {
                int diff = n - i;
                if(diff > 1 && isPrime[diff])
                    ans.push_back({i, diff});
            }
        }
        return ans;
    }
};