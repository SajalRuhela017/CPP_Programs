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
        int n, ans = -1;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++)
            cin >> v[i];
        for(int i = 0; i <= n; i++)
        {
            int current = 0;
            for(int j = 0; j < n; j++)
            {
                if(v[j] > i)
                    current++;
            }
            if(current == i)
                ans = i;
        }
        cout << ans << '\n';
    }
    return 0;
}