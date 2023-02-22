// A conveyor belt has packages that must be shipped from one port to another within days days.

// The ith package on the conveyor belt has a weight of weights[i]. Each day, we load the ship with packages on the conveyor belt (in the order given by weights). We may not load more weight than the maximum weight capacity of the ship.

// Return the least weight capacity of the ship that will result in all the packages on the conveyor belt being shipped within days days.

class Solution {
public:
    int shipWithinDays(vector<int>& weights, int D) 
    {
        int left = 0, right = 25000000;
        for (int w: weights)
            left = max(left, w);
        while (left < right) 
        {
            int mid = (left + right) / 2, need = 1, cur = 0;
            for(int i = 0; i < weights.size() && need <= D; cur += weights[i++])
                if (cur + weights[i] > mid)
                    cur = 0, need++;
            if(need > D)    
                left = mid + 1;
            else    
                right = mid;
        }
        return left;
    }
};