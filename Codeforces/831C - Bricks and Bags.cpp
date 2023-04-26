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
        int sum = v[n - 1] - v[0], mx = 0;
        for(int i = 1; i < n - 1; i++)
        {
            int sum1 = v[i] - v[0];
            int sum2 = v[n - 1] - v[i];
            mx = max(mx, max(sum1, sum2));
        }
        cout << sum + mx << '\n';
    }
    return 0;
}