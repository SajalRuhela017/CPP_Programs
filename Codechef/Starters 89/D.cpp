/**            ॐ
 *      author : rhsajal_017
**/

#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define int long long

bool binarySearch(int x, int n, int y, int m, int sum_a, int sum_b, int k)
{
    double avg_a = (sum_a + x * k) / (double)(n + x);
    double avg_b = (sum_b + y) / (double)(m + y);
    return avg_a > avg_b;
}
 
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t, k = 1;
    cin >> t;
    while(t--)
    {
        int n, m, k, sum_a = 0, sum_b = 0;
        cin >> n >> m >> k;
        vector<int> a(n), b(m);
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum_a += a[i];
        }
        for(int i = 0; i < m; i++)
        {
            cin >> b[i];
            sum_b += b[i];
        }
        if(k == 1)
        {
            cout << -1 << '\n';
            continue;
        }
        int ans = n + m + 100;
        for(int i = 0; i <= n + m + 1; i++)
        {
            int s = 0, e = m + n + 1;
            while(s <= e)
            {
                int mid = (s + e) / 2;
                if(binarySearch(i, n, mid, m, sum_a, sum_b, k))
                {
                    e = mid - 1;
                    ans = min(ans, i + mid);
                }
                else
                    s = mid + 1;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}