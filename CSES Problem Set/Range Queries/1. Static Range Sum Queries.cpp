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
    int n, q;
    cin >> n >> q;
    vector<int> v(n), pref(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
        if(i == 0)
            pref[0] = v[0];
        else
            pref[i] = pref[i - 1] + v[i];
    }
    for(int i = 0; i < q; i++)
    {
        int a, b;
        cin >> a >> b;
        if(a == 1)
            cout << pref[b - 1] << '\n';
        else
            cout << pref[b - 1] - pref[a - 2] << '\n';
    }
    return 0;
}