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
        int n, mn = INT_MAX, odd = 0, even = 0;
        cin >> n;
        vector<int> v(n);
        set<int> s;
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
            if(v[i] & 1)
                s.insert(v[i]);
            mn = min(mn, v[i]);
            odd += (v[i] & 1);
            even += !(v[i] & 1);
        }
        if(odd == n || even == n)
        {
            cout << "YES" << '\n';
            continue;        
        }
        if(mn & 1)
        {
            cout << "YES" << '\n';
            continue;
        }
        cout << "NO" << '\n';
    }
    return 0;
}