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
        int a, b, c, d, x = 0, y = 0;
        cin >> a >> b >> c >> d;
        x = abs(b - a), y = abs(d - c);
        if(x == 1 || y == 1)
            int check = a + 1, temp = b + 1;
        if((a + 1) % b == (c + 1) % d)
            cout << "1\n";
        else
        {
            int gcd = __gcd(b , d), pro = b * d;
            gcd = pro / gcd;
            cout << gcd - (a % b) << "\n";
        }
    }
    return 0;
}