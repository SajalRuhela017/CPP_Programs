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
        int n, k;
        cin >> n >> k;
        if(n & 1)
        {
            if(k & 1)
                cout << "Yes\n";
            else
                cout << "No\n";
        }
        else
            cout << "Yes\n";
    }
    return 0;
}