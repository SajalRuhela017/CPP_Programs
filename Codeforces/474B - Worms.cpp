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
    int n, x, m, q;
    cin >> n;
    vector<int> v;
    for(int i = 1; i <= n; i++)
    {
        cin >> x;
        if(i == 1)
            v.push_back(x);
        else
            v.push_back(v.back() + x);
    }
    cin >> m;
    for(int i = 1; i <= m; i++)
    {
        cin >> q;
        cout << lower_bound(v.begin(), v.end(), q) - v.begin() + 1 << '\n';
    }
    return 0;
}