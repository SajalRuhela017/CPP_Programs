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
        int n, x;
        cin >> n >> x;
        if(n % x)
        {
            cout << -1 << '\n';
            continue;
        }
        vector<int> ans(n + 1);
        iota(ans.begin(), ans.end(), 0);
        ans[n] = 1 , ans[1] = x;
        while(x < n)
        {
            for(int i = x * 2; i <= n; i += x)
            {
                if(n % i == 0)
                {
                    ans[x] = i;
                    x = i;
                    break;
                }
            }
        }
        for(int i = 1; i <= n; i++)
            cout << ans[i] << ' ';
        cout << '\n';
    }
    return 0;
}