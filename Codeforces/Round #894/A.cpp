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
        int n, m, found = 0, current = 0;
        cin >> n >> m;
        vector<string> v(n);
        for(int i = 0; i < n; i++)
            cin >> v[i];
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(current == 0 && v[j][i] == 'v')
                {
                    current++ , found++;
                    break;
                }
                else if(current == 1 && v[j][i] == 'i')
                {
                    current++ , found++;
                    break;
                }
                else if(current == 2 && v[j][i] == 'k')
                {
                    current++ , found++;
                    break;
                }
                else if(current == 3 && v[j][i] == 'a')
                {
                    current++ , found++;
                    break;
                }
            }
        }
        cout << (found == 4 ? "YES" : "NO") << '\n';
    }
    return 0;
}