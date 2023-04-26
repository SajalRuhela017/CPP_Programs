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
        int x, y;
        cin >> x >> y;
        if(2 * y == x * x)
            cout << "Yes" << '\n';
        else
            cout << "No" << '\n';
        
    }
    return 0;
}