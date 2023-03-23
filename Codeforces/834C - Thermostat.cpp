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
            cout << "0\n";
        else if(abs(a - b) >= x)
            cout << "1\n";
        else if(r - max(a , b) >= x || min(a , b) - l >= x)
            cout <<"2\n";
        else if(((r - b) >= x && (a - l) >= x) || ((r - a) >= x && (b - l) >= x))
            cout << "3\n";
        else
            cout << "-1\n";
    }
    return 0;
}