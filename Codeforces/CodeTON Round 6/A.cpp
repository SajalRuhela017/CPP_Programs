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
        int n, k , x;
        cin >> n >> k >> x;
        int mex = 0, sum = 0, i;
        bool flag = false;
        if(n < k)
        {
            cout << -1 << '\n';
            continue;
        }
        if(x < k - 1)
        {
            cout << -1 << '\n';
            continue;
        }
        if(x == k)
        {
            for(i = 1; i <= n; i++)
            {
                sum += mex;
                mex++;
                if(mex == k)
                {
                    sum += (n - i) * (x - 1);
                    break;
                }
            }
            cout << sum << '\n';
            continue;
        }
        for(i = 1; i <= n; i++)
        {
            sum += mex;
            mex++;
            if(mex == k)
            {
                sum += (n - i) * x;
                break;
            }
        }
        cout << sum << '\n';
    }
    return 0;
}