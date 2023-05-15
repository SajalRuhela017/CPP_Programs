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
        int n, ans = 1;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++)
            cin >> v[i];
        if(n == 1)
        {
            cout << ans << '\n';
            continue;
        }
        int i = 0;
        while(i < n - 1 && v[i] == v[i + 1])
            i++;
        if(i == n - 1)
        {
            cout << ans << '\n';
            continue;
        }
        bool flag = v[i] > v[i + 1];
        for(; i < n - 1; i++)
        {
            while(i < n - 1 && v[i] == v[i + 1])
                i++;
            if(i == n - 1)
                break;
            if(flag && v[i] < v[i + 1])
            {
                flag = 0;
                ans++;
            }
            else if(!flag && v[i] > v[i + 1])
            {
                flag = 1;
                ans++;
            }
        }
        cout << ans + 1 << '\n';
    }
    return 0;
}