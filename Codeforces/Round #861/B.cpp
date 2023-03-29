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
        vector<vector<int>> v(n, vector<int>(m));
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m ; j++)
                cin >> v[i][j];
        }
        if(n == 1)
        {
            cout << "0\n";
            continue;
        }
        int ans = 0, sum = 0;
        for(int i = 0; i < m; i++)
        {
            sum = 0;
            vector<int> temp(n);
            for(int j = 0; j < n; j++)
                temp[j] = v[j][i];
            sort(temp.begin() , temp.end());
            for(int j = n - 1; j >= 0; j--)
                sum += j * temp[j] - (n - 1 - j) * temp[j];
            ans += sum;
        }
        cout << ans << "\n";
    }
    return 0;
}