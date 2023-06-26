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
        int n, m, A = 0, B = 0;
        cin >> n >> m;
        vector<int> a(n), b(m);
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            A += a[i];
        }
        for(int i = 0; i < m; i++)
        {
            cin >> b[i];
            B += b[i];
        }
        if(A == B)
            cout << "Draw" << '\n';
        else if(A < B)
            cout << "Tenzing" << '\n';
        else
            cout << "Tsondu" << '\n';
    }
    return 0;
}