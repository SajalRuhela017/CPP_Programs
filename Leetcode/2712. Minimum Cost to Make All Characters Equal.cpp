// You are given a 0-indexed binary string s of length n on which you can apply two types of operations:

// Choose an index i and invert all characters from index 0 to index i (both inclusive), with a cost of i + 1
// Choose an index i and invert all characters from index i to index n - 1 (both inclusive), with a cost of n - i
// Return the minimum cost to make all characters of the string equal.

// Invert a character means if its value is '0' it becomes '1' and vice-versa.

class Solution {
public:
    long long minimumCost(string s)
    {
        int n = s.size();
        vector<long long> pref(n);
        long long suff = 0;
        for(int i = 1; i < n; i++)
        {
            if(s[i] != s[i - 1])
                pref[i] = (pref[i - 1] + i);
            else
                pref[i] = pref[i - 1];
        }
        long long ans = LLONG_MAX;
        for(int i = n - 2; i >= 0; i--)
        {
            if(s[i] != s[i + 1])
                suff += (n - i - 1);
            ans = min(ans, pref[i] + suff);
        }
        return min(ans, suff);
    }
};