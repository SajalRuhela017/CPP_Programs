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
        int n, one = 0;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
            if(i && i + 1 < n)
                one += (v[i] == 1);
        }
        if(n == 3 && v[1] & 1)
            cout << -1 << '\n';
        else if(one == n - 2)
            cout << -1 << '\n';
        else
        {
            int ans = 0;
            for(int i = 1; i + 1 < n; i++)
                ans += (v[i] + 1) / 2;
            cout << ans << '\n';
        }
    }
    return 0;
}