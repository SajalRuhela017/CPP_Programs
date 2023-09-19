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
        int n, x, ans = 0;
        cin >> n;
        vector<int> place(n + 1);
        for(int i = 0; i < n; i++)
        {
            cin >> x;
            place[x] = i;
        }
        for(int i = 2; i <= n; i++)
            ans += (place[i] < place[i - 1]);
        cout << ans << '\n';
    }
    return 0;
}