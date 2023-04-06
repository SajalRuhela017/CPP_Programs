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
        int n, k;
        cin >> n >> k;
        vector<int> v(n), a(n);
        for(int i = n - k; i < n; i++)
            cin >> v[i];
        if(k == 1)
        {
            cout << "Yes\n";
            continue;
        }
        for(int i = n - k + 1; i < n; i++)
            a[i] = v[i] - v[i - 1];
        if(!is_sorted(a.begin() + n - k + 1, a.end()))
        {
            cout << "No\n";
            continue;
        }
        if(v[n - k] > a[n - k + 1] * (n - k + 1))
            cout << "No\n";
        else
            cout << "Yes\n";
    }
    return 0;
}