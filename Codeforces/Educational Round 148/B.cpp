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
        int n, k, sum = 0, ans = 0, curr_sum = 0;
        cin >> n >> k;
        vector<int> v(n);
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
            sum += v[i];
        }
        sort(v.rbegin(), v.rend());
        for(int i = 0; i < n - 2 * k; i++)
            curr_sum += v[i];
        ans = curr_sum;
        for(int i = n - 2 * k, j = 0; i < n - 1; i += 2)
        {
            curr_sum -= v[j++];
            curr_sum += (v[i] + v[i + 1]);
            ans = max(ans, curr_sum);
        }
        cout << ans << '\n';
    }
    return 0;
}