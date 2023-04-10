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
        int a, b;
        cin >> a >> b;
        if(a % b || b % a);
        cout << "2\n";
        cout << a - 1 << " " << 1 << '\n';
        cout << a << " " << b << '\n';
    }
    return 0;
}