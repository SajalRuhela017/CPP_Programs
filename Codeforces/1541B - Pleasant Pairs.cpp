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
        vector<int> v(n + 1);
        for(int i = 1; i <= n; i++)
            cin >> v[i];
        for(int i = 1; i <= n; i++)
        {
            for(int j = v[i] - i; j <= n; j += v[i])
            {
                if(i >= j)
                    continue;
                if(v[i] * v[j] == i + j)
                    ans++;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}