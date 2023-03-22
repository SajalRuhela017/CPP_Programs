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
        int n, zero = 0, mn_a = INT_MAX, mx_a = INT_MIN, mn_b = INT_MAX, mx_b = INT_MIN, one = 0;
        cin >> n;
        vector<int> a(n), b(n);
        bool flag = true;
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            if(!a[i])
                zero++;
            else
                mn_a = min(mn_a , i) , mx_a = max(mx_a , i), one++;
        }
        for(int i = 0; i < n; i++)
        {
            cin >> b[i];
            if(b[i] == 0 && a[i] == 1)
                flag = false;
            if(b[i])
                mn_b = min(mn_b , i) , mx_b = max(mx_b , i);
        }
        if(b[n - 1] != a[n - 1] || b[0] != a[0])
        {
            cout << "NO\n";
            continue;
        }
        for(int i = 1; i < n - 1; i++)
        {
            if(a[i] != b[i] && !a[i] && !one)
            {
                flag = false;
                break;
            }
            if(a[i] != b[i] && a[i])
            {
                flag = false;
                break;
            }
        }
        cout << (flag ? "YES\n" : "NO\n");
    }
    return 0;
}