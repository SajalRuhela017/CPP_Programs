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
        int n, diff = INT_MAX;
        cin >> n;
        bool flag = true;
        vector<int> a(n);
        for(int i = 0; i < n; i++)
            cin >> a[i];
        for(int i = 1; i < n; i++)
        {
            if(a[i - 1] > a[i])
            {
                flag = false;
                break;
            }
            else
                diff = min(diff, a[i] - a[i - 1]);
        }
        if(!flag)
            cout << 0 << '\n';
        else
            cout << diff / 2 + 1 << '\n';
    }
    return 0;
}