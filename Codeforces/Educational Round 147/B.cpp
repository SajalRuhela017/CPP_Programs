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
        int n, s = -1, e = -1;
        cin >> n;
        vector<int> a(n), b(n);
        for(int i = 0; i < n; i++)
            cin >> a[i];
        for(int i = 0; i < n; i++)
        {
            cin >> b[i];
            if(b[i] != a[i])
            {
                if(s == -1)
                    s = i;
                else
                    e = i;
            }
        }
        while(s > 0 && b[s] >= b[s - 1])
            s--;
        while(e < n - 1 && b[e] <= b[e + 1])
            e++;
        cout << s + 1 << ' ' << e + 1 << '\n';
    }
    return 0;
}