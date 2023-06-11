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
        int n;
        cin >> n;
        string s, ans = "";
        cin >> s;
        for(int i = 0; i < n; i++)
        {
            ans += s[i++];
            while(s[i] != ans.back() && i < n)
                i++;
        }
        cout << ans << '\n';
    }
    return 0;
}