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
        string s;
        cin >> s;
        int ans = 1, cnt = 1, mx = 1;
        for(int i = 1; i < n; i++)
        {
            if(s[i] == s[i - 1])
            {
                cnt++;
                mx = max(mx, cnt);
            }
            else
                cnt = 1;
        }
        cout << mx + 1 << '\n';
    }
    return 0;
}