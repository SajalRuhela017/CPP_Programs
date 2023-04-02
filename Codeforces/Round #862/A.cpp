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
        int n, x = 0;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
            x ^= v[i];
        }
        if(x == 0)
        {
            cout << "0\n";
            continue;
        }
        if(n % 2 == 0 && x)
        {
            cout << "-1\n";
            continue;
        }
        cout << x << "\n";
    }
    return 0;
}