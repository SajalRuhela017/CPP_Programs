/**            ॐ
 *      author : rhsajal_017
**/

#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define int long long

int fact(int n)
{
    int ans = 1;
    for(int i = 2; i <= n; i++)
        ans *= i;
    return ans;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tt, k = 1;
    cin >> tt;
    while(tt--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> price;
        for(int i = 0; i < k; i++)
        {
            if(pow(2, i) > n)
                break;
            price.push_back(pow(2, i));
        }
        int val = fact(price.size() - 1);
        int temp = price.back(), j = price.size() - 2;
        while(temp + price[j] > n)
            j--;
        
    }
    return 0;
}