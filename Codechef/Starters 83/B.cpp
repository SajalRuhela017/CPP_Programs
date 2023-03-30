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
        int a, b, c, flag = 1;
        cin >> a >> b >> c;
        if(a < b && b < c)
        {
            cout << "0\n";
            continue;
        }
        if(a > b && b < c)
        {
            cout << "-1\n";
            continue;
        }
        int ans = -1;
        for(int i = 0; i <= 100; i++)
        {
            int A = a ^ i, B = b ^ i, C = c ^ i;
            if(A < B && B < C)
            {
                ans = i;
                break;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}