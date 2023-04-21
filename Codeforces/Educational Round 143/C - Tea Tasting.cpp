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
        vector<int> a(n), b(n), ans(n);
        for(int i = 0; i < n; i++)
            cin >> a[i];
        for(int i = 0; i < n; i++)
            cin >> b[i];
        vector<int> pref(n + 1, 0);
        for(int i= 0; i < n; i++)
            pref[i+1] = pref[i] + b[i];
        vector<int> count(n + 1), sum(n + 1);
        for(int i = 0; i < n; i++)
        {
            int x = upper_bound(pref.begin(), pref.end(), a[i] + pref[i]) - pref.begin() - 1;
            count[i]++;
            count[x]--;
            sum[x] += a[i] - pref[x] + pref[i];
        }
        for(int i = 0; i < n; i++)
        {
            cout << count[i] * b[i] + sum[i] << ' ';
            count[i + 1] += count[i]; 
        }
        cout << '\n';
    }
    return 0;
}