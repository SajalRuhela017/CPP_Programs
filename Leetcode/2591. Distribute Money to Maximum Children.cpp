// You are given an integer money denoting the amount of money (in dollars) that you have and another integer children denoting the number of children that you must distribute the money to.

// You have to distribute the money according to the following rules:

// All money must be distributed.
// Everyone must receive at least 1 dollar.
// Nobody receives 4 dollars.
// Return the maximum number of children who may receive exactly 8 dollars if you distribute the money according to the aforementioned rules. If there is no way to distribute the money, return -1.

class Solution {
public:
    int distMoney(int money, int children) 
    {
        if(money == children * 8)
            return children;
        if(money < children)
            return -1;
        int ans = 0;
        vector<int> dollars(children , 1);
        money -= children;
        for(int i = 0; i < children - 1; i++)
        {
            if(money >= 7)
            {
                dollars[i] += 7;
                money -= 7;
                ans++;
            }
            else
            {
                dollars[i] += money;
                money = 0;
                break;
            }
        }
        if(money)
        {
            dollars[children - 1] += money;
            if(dollars[children - 1] == 8)
                ans++;
            if(dollars[children - 1] == 4)
                ans--;
        }
        return ans;
    }
};