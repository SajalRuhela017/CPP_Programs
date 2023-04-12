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
        int i = 0, j = n - 1, ans = 0, alice = v[0], bob = v[n - 1];
        while(i < j)
        {
            if(alice == bob)
                ans = max(ans, i + 1 + n - j);
            if(alice > bob)
                bob += v[--j];
            else
                alice += v[++i];           
        }
        cout << ans << '\n';
    }
    return 0;
}