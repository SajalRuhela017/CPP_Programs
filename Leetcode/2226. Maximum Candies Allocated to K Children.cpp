// You are given a 0-indexed integer array candies. Each element in the array denotes a pile of candies of size candies[i]. You can divide each pile into any number of sub piles, but you cannot merge two piles together.

// You are also given an integer k. You should allocate piles of candies to k children such that each child gets the same number of candies. Each child can take at most one pile of candies and some piles of candies may go unused.

// Return the maximum number of candies each child can get.

class Solution {
public:
    int maximumCandies(vector<int>& candies, long long k) 
    {
        int s = 0, e = 1e7;
        while(s < e)
        {
            long long sum = 0, m = (s + e + 1) / 2;
            for(int i = 0; i < candies.size(); i++)
                sum += (candies[i] / m);
            if(k > sum)
                e = m - 1;
            else
                s = m;
        }
        return s;
    }
};