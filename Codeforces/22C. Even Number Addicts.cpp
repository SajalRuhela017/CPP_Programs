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
        int n, o = 0, e = 0;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
            o += (v[i] & 1);
        }
        e = n - o;
        if(o % 4 == 3 || o % 4 == 0)
            cout << "Alice" << '\n';
        else if(o % 4 == 2)
            cout << "Bob" << '\n';
        else if(e & 1)
            cout << "Alice" << '\n';
        else
            cout << "Bob" << '\n';
    }
    return 0;
}