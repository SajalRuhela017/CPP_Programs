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
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    if(k == n)
        cout << 1000000000 << '\n';
    else if(k == 0)
        cout << (v[0] == 1 ? -1 : v[0] - 1) << '\n';
    else
    {
        int x = v[k - 1];
        if(v[k] == x)
            cout << -1 << '\n';
        else
            cout << v[k - 1] + 1 << '\n';
    }
    return 0;
}