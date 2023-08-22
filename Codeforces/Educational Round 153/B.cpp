/**            ॐ
 *      author : rhsajal_017
**/

#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define int long long
 
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tt, k = 1;
    cin >> tt;
    while(tt--)
    {
        int m, k, a1, ak, coins = 0;
        cin >> m >> k >> a1 >> ak;
        // int total = ak * k + a1;
        // if(m <= total)
        //     cout << 0 << '\n';
        // else
        // {
        //     m -= total;
        //     if(m < ak)
        //         coins += m;
        //     else
        //     {
        //         coins += (m / ak);
        //         m %= ak;
        //         coins += ()
        //     }
        // }
        if(m <= ak * k)
        {
            m %= k;
            if(m > a1)
                coins += (m - a1);
        }
        else
        {
            m -= (ak * k);
            m -= min(a1, m);
            if(m)
            {
                coins += (m / k);
                m %= k;
                coins += m;
            }
        }
        cout << coins << '\n';
    }
    return 0;
}