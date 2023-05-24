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
        int n, score = 0;
        cin >> n;
        vector<int> v(n), ans(n);
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
            ans[i] = (v[i] + 1) % 2;
        }
        for(auto &i: ans)
            cout << i << ' ';
        cout << '\n';
    }
    return 0;
}