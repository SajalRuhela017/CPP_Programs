// There is a broken calculator that has the integer startValue on its display initially. In one operation, you can:

// multiply the number on display by 2, or
// subtract 1 from the number on display.
// Given two integers startValue and target, return the minimum number of operations needed to display target on the calculator.

class Solution {
public:
    int brokenCalc(int startValue, int target) 
    {
        int ans = 0, x = target;
        while(x != startValue)
        {
            if(x % 2 == 0 && x > startValue)
                x /= 2;
            else if(x > startValue)
                x++;
            else
                ans += abs(x - startValue) - 1 , x = startValue;
            ans++;
        }
        return ans;
    }
};