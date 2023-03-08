// Koko loves to eat bananas. There are n piles of bananas, the ith pile has piles[i] bananas. The guards have gone and will come back in h hours.

// Koko can decide her bananas-per-hour eating speed of k. Each hour, she chooses some pile of bananas and eats k bananas from that pile. If the pile has less than k bananas, she eats all of them instead and will not eat any more bananas during this hour.

// Koko likes to eat slowly but still wants to finish eating all the bananas before the guards return.

// Return the minimum integer k such that she can eat all the bananas within h hours.

class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) 
    {
        long long s = 1, e = 1000000000;
        while(s < e)
        {
            long long mid = (s + e) / 2, eaten = 0;
            for(int i = 0; i < piles.size(); i++)
                eaten += (piles[i] + mid - 1) / mid;
            if(eaten > h)
                s = mid + 1;
            else
                e = mid;
        }
        return s;
    }
};