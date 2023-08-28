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
        int x, y, n;
        cin >> x >> y >> n;
        vector<int> v(n);
        v[n - 1] = y;
        int diff = 1;
        bool flag = true;
        for(int i = n - 2; i >= 0; i--)
        {
            v[i] = v[i + 1] - diff;
            diff++;
            if(v[i] < x)
            {
                flag = false;
                break;
            }
        }
        if(!flag)
        {
            cout << -1 << '\n';
            continue;
        }
        v[0] = x;
        for(auto i: v)
            cout << i << ' ';
        cout << '\n';
    }
    return 0;
}