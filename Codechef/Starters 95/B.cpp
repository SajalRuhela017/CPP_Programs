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
        if(n <= 3)
            cout << "BRONZE" << '\n';
        else if(n <= 6)
            cout << "SILVER" << '\n';
        else
            cout << "GOLD" << '\n';
    }
    return 0;
}