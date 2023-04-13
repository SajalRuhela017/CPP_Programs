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
        int n;
        cin >> n;
        if(n < 3)
        {
            cout << "0\n";
            continue;
        }
        cout << (n - 2) / 2 + ((n - 1) / 2) * 2 << '\n';
    }
    return 0;
}