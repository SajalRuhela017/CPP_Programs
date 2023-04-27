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
        if(n == 1)
            cout << 1;
        else if(n & 1)
            cout << -1;
        else
        {
            for(int i = 0; i < n; i++)
                cout << (i & 1 ? i : n - i) << ' ';
        }
        cout << '\n';
    }
    return 0;
}