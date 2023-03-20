// You have a long flowerbed in which some of the plots are planted, and some are not. However, flowers cannot be planted in adjacent plots.

// Given an integer array flowerbed containing 0's and 1's, where 0 means empty and 1 means not empty, and an integer n, return if n new flowers can be planted in the flowerbed without violating the no-adjacent-flowers rule.

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) 
    {
        int m = flowerbed.size();
        if(m == 1)
        {
            if(flowerbed[0] == 0 || n == 0)
                return true;
            return false;
        }
        int ans = 0, sum = 0, i;
        if(flowerbed[0] + flowerbed[1] == 0)
            ans++;
        for(i = 1; i < m - 3; i += 2)
        {
            sum = flowerbed[i] + flowerbed[i + 1] + flowerbed[i + 2];
            if(sum == 0)
                ans++;
        }
        if(m > 2 && flowerbed[m - 1] + flowerbed[m - 2] == 0)
            ans++;
        return ans >= n;
    }
};