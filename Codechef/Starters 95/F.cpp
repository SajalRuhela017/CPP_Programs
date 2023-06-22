/**            ॐ
 *      author : rhsajal_017
**/

#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define int long long

int log2(int n)
{
    int ans = 0;
    while((1LL << ans) <= n)
        ans++;
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
        int n, mx = 0;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
            mx = max(mx, v[i]);
        }
        int mxLog = log2(mx), count = 0;
        for(int i = 0; i < n; i++)
        {
            int x = log2(v[i]);
            if(x == mxLog)
                count++;
        }
        cout << (count + 1) / 2 << '\n';
    }
    return 0;
}