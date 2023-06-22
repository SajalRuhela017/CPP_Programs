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
        int n, sum = 0, op = 0;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
            sum += abs(v[i]);
        }
        for(int i = 0; i < n; i++)
        {
            if(v[i] < 0)
            {
                while(v[i] <= 0 && i < n)
                    i++;
                op++;
            }
        }
        cout << sum << ' ' << op << '\n';
    }
    return 0;
}