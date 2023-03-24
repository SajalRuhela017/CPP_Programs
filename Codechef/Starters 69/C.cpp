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
        int n;
        cin >> n;
        vector<int> v(n), pref(n), suff(n);
        for(int i = 0; i < n; i++)
            cin >> v[i];
        pref[0] = v[0] , suff[n - 1] = v[n - 1];
        for(int i = 1; i < n; i++)
        {
            pref[i] = pref[i - 1] | v[i];
            suff[n - i - 1] = suff[n - i] | v[n - i - 1];
        }
    }
    return 0;
}