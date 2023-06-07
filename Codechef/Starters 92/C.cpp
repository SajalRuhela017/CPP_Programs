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
        int w, l;
        cin >> w >> l;
        if(w & 1 && l & 1)
            cout << "NO" << '\n';
        else
            cout << "YES" << '\n';
    }
    return 0;
}