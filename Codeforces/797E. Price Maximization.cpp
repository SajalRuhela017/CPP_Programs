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
        int n, k, ans = 0;
        cin >> n >> k;
        vector<int> v(n);
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
            ans += v[i] / k;
            v[i] %= k;
        }
        sort(v.begin(), v.end());
        int i = 0, j = n - 1;
        while(i < j)
        {
            while (v[i] + v[j] < k && i < j)
                i++;
            if(i == j)
                break;
            ans++, j--, i++;
        }
        cout << ans << '\n';
    }
    return 0;
}