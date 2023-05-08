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
        int n, m;
        cin >> n >> m;
        vector<int> x(n), seats(m, 0);
        int rightmost = 0, leftmost = m - 1, ans = 0;
        for(int i = 0; i < n; i++)
            cin >> x[i];
        sort(x.rbegin(), x.rend());
        int i = 0;
        for(; i < n; i++)
        {
            if(x[i] == -1)
                break;
            seats[x[i] - 1] = 1;
        }
        for(auto &i: seats)
            cout << i << ' ';
        cout << '\n';
        //     ans += i;
        // cout << ans << '\n';        
    }
    return 0;
}