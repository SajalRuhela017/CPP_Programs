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
        string s;
        cin >> s;
        int ans = 0;
        if(s[0] != 'c')
            ans++;
        if(s[1] != 'o')
            ans++;
        if(s[2] != 'd')
            ans++;
        if(s[3] != 'e')
            ans++;
        if(s[4] != 'f')
            ans++;
        if(s[5] != 'o')
            ans++;
        if(s[6] != 'r')
            ans++;
        if(s[7] != 'c')
            ans++;
        if(s[8] != 'e')
            ans++;
        if(s[9] != 's')
            ans++;
        cout << ans << '\n';
    }
    return 0;
}