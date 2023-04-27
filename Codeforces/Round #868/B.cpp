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
        int n, k, unbalanced = 0;
        cin >> n >> k;
        for(int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            if(abs(x - i) % k)
                unbalanced++;
        }
        cout << (unbalanced <= 2 ? unbalanced / 2 : -1) << '\n';
    }
    return 0;
}