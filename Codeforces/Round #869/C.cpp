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
        cin >> v[i];
    for(int i = 2; i < n; i++)
    {
        pref[i] += pref[i - 1];
        if(v[i] <= v[i - 1] && v[i - 1] <= v[i - 2])
            pref[i]++;
    }
    while(q--)
    {
        int l, r;
        cin >> l >> r;
        if(r - l <= 1)
            cout << r - l + 1 << '\n';
        else
            cout << r - l + 1 - pref[r - 1] + pref[l] << '\n';
    }
    return 0;
}