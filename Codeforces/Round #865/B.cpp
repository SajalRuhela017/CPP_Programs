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
        vector<vector<int>> ans(2, vector<int>(n));
        map<int, int> mp;
        ans[0][0] = n + n;
        ans[1][n - 1] = n + n - 1;
        int s = 1, e = n + n - 2;
        for(int i = 0; i < n - 1; i++)
        {
            if(i & 1)
            {
                ans[0][i + 1] = e--;
                ans[1][i] = e--;
            }
            else
            {
                ans[1][i] = s++;
                ans[0][i + 1] = s++;
            }
        }
        for(int i = 0; i <= 1; i++)
        {
            for(int j = 0; j < n; j++)
                cout << ans[i][j] << ' ';
            cout << '\n';
        }
        mp.clear();
    }
    return 0;
}