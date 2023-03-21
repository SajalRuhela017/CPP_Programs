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
        int n, ans = 0, unknown = 0, known = 0;
        cin >> n;
        for(int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if(x == 1)
                unknown++;
            else
                known += unknown , unknown = 0;
            ans = max(ans , unknown + (known ? known / 2 + 1 : 0));
        }
        cout << ans << endl;
    }
    return 0;
}