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
        int n, x, knowledge = 0;
        cin >> n >> x;
        vector<int> a(n), b(n), c(n);
        for(int i = 0; i < n; i++)
            cin >> a[i];
        for(int i = 0; i < n; i++)
            cin >> b[i];
        for(int i = 0; i < n; i++)
            cin >> c[i];
        
        for(int i = 0; i < n; i++)
        {
            if((a[i] | x) != x)
                break;
            knowledge |= a[i];
        }
        for(int i = 0; i < n; i++)
        {
            if((b[i] | x) != x)
                break;
            knowledge |= b[i];
        }
        for(int i = 0; i < n; i++)
        {
            if((c[i] | x) != x)
                break;
            knowledge |= c[i];
        }
        cout << (knowledge == x ? "Yes" : " No") << '\n';
    }
    return 0;
}