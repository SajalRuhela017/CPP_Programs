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
        int n, ans = 0;
        cin >> n;
        vector<int> a(n), b(n), pa(n), pb(n);
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            pa[a[i] - 1] = i;
        }
        for(int i = 0; i < n; i++)
        {
            cin >> b[i];
            pb[b[i] - 1] = i;
        }
        int last = n - 1;
        for(int i = n - 1; i >= 0; i--)
        {
            if(pa[b[i] - 1] <= last)
                last = pa[b[i] - 1] - 1;
            else
            {
                ans = i + 1;
                break;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}