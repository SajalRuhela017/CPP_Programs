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
        int n, m;
        cin >> n >> m;
        vector<int> v(m), ans(n), vis(n + m);
        for(int i = 0; i < m; i++)
            cin >> v[i];
        for(int i = 0, j = n - 1; i < m; i++)
        {
            if(!vis[v[i] - 1])
            {
                vis[v[i] - 1] = 1;
                if(j >= 0)
                    ans[j--] = i + 1;
            }
        }
        for(auto &i: ans)
            cout << (!i ? -1 : i) << " ";
        cout << "\n";
    }
    return 0;
}