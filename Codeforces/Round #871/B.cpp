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
        int n;
        cin >> n;
        vector<int> v(n);
        int ans = 0, seg = 0;
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
            if(v[i] == 0)
            {
                seg++;
                ans = max(seg, ans);
            }
            else
                seg = 0;
        }
        cout << ans << '\n';
    }
    return 0;
}