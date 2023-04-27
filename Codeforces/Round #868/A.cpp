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
        int n, k;
        cin >> n >> k;
        for(int i = 0; i <= n; i++)
        {
            int x = i * (i - 1) / 2, y = (n - i) * (n - i - 1) / 2;
            if(x + y == k)
            {
                cout << "Yes" << '\n';
                for(int j = 0; j < i; j++)
                    cout << 1 << ' ';
                for(int j = i; j < n; j++)
                    cout << -1 << ' ';
                cout << '\n';
                goto NEXT;
            }
        }
        cout << "No" << '\n';
        NEXT:;
    }
    return 0;
}