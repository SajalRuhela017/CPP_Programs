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
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++)
            cin >> v[i];
        vector<bool> vis(n, false);
        int curr = 0;
        for(int i = 0; i < min(32LL, n); i++)
        {
            int mx = 0, ind = 0;
            for(int j = 0; j < n; j++)
            {
                if(!vis[j])
                {
                    if((curr | v[j]) > mx)
                    {
                        mx = curr | v[j];
                        ind = j;
                    }
                }
            }
            vis[ind] = true;
            cout << v[ind] << ' ';
            curr |= v[ind];
        }
        for(int i = 0; i < n; i++)
            if(!vis[i])
                cout << v[i] << ' ';
        cout << '\n';
    }
    return 0;
}