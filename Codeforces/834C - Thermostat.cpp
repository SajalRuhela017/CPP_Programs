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
        int l, r, x, a, b;
        cin >> l >> r >> x >> a >> b;
        if(a == b)
        {
            cout << "0\n";
            continue;
        }
        if(abs(a - b) >= x)
        {
            cout << "1\n";
            continue;
        }
        
    }
    return 0;
}