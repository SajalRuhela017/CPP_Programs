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
        int n, m, sum = 0;
        cin >> n >> m;
        vector<vector<int>> v(n, vector<int>(m));
        string s;
        for(int i = 0; i < n; i++)
        {
            cin >> s;
            for(int j = 0; j < m; j++)
            {
                v[i][j] = s[j] - '0';
                sum += v[i][j];
            }
        }
        int mn = INT_MAX;
        for(int i = 0; i < n - 1; i++)
        {
            for(int j = 0; j < m - 1; j++)
            {
                int x = v[i][j] + v[i + 1][j] + v[i][j + 1] + v[i + 1][j + 1];
                if(!x)
                    continue;
                mn = min(mn, max(1LL, x - 1));
            }
        }
        if(!sum)
            cout << 0 << '\n';
        else
            cout << 1 + sum - mn << '\n';
    }
    return 0;
}