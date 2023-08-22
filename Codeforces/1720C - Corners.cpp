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
        int n, m, sum = 0, mn = INT_MAX;
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
        for(int i = 0; i < n - 1; i++)
        {
            for(int j = 0; j < m - 1; j++)
            {
                int curr_sum = v[i][j] + v[i + 1][j] + v[i][j + 1] + v[i + 1][j + 1];
                if(!curr_sum)
                    continue;
                mn = min(mn, max(1LL, curr_sum - 1));
            }
        }
        if(sum == 0)
            cout << 0 << '\n';
        else
            cout << 1 + sum - mn << '\n';
    }
    return 0;
}