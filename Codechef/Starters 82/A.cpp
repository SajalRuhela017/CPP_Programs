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
    int t, k = 1;
    cin >> t;
    while(t--)
    {
        int n, mn = INT_MAX, mx = 0;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
            mn = min(mn , v[i]);
            mx = max(mx , v[i]);
        }
        if(n == 1 || mn == mx)
        {
            cout << "0\n";
            continue;
        }
        int ans = 0;
        for(int i = 0; i < n; i++)
        {
            if(v[i] != mn)
                ans++;
        }
        cout << ans << "\n";
    }
    return 0;
}