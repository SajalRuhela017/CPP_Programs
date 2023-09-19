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
        for(int i = 0; i < n; i++)
            cin >> v[i];
        if(v[n - 1] < v[n - 2])
            cout << -1 << '\n';
        else
        {
            if(v.back() < 0)
            {
                if(is_sorted(v.begin(), v.end()))
                    cout << 0 << '\n';
                else
                    cout << -1 << '\n';
            }
            else
            {
                cout << n - 2 << '\n';
                for(int i = 1; i < n - 1; i++)
                    cout << i << ' ' << n - 1 << ' ' << n << '\n';
            }
        }
    }
    return 0;
}