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
        sort(v.begin(), v.end());
        int ans = 0;
        for(int i = 0; i <= n; i++)
        {
            if(!i || v[i - 1] < i)
            {
                if(i == n || v[i] > i)
                    ans++;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}