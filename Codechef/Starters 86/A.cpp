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
        if(n == 2)
        {
            cout << abs(v[0] - v[1]) << '\n';
            continue;
        }
        int mn = INT_MAX, ind = 0;
        for(int i = 0; i < n; i++)
        {
            int temp = 0;
            if(i < n - 1)
            {
                temp = max(temp, abs(v[i + 1] - v[i]));
            }
            if(i)
            {
                temp = max(temp, abs(v[i] - v[i - 1]));
            }
            mn = min(mn, temp);
        }
        cout << mn << '\n';
    }
    return 0;
}