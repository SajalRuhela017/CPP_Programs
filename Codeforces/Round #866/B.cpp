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
        string s;
        cin >> s;
        int n = s.length(), one = 0, zero = 0, curr = 0, mx = 0;
        for(int i = 0; i < n; i++)
            s[i] == '1' ? one++ : zero++;
        if(one == n)
        {
            cout << n*n << '\n';
            continue;
        }
        if(zero == n)
        {
            cout << 0 << '\n';
            continue;
        }
        s += s;
        curr = (s[0] == '1');
        for(int i = 1; i < 2 * n; i++)
        {
            if(s[i] == '1')
            {
                curr++;
                mx = max(curr, mx);
            }
            else
                curr = 0;
        }
        int ans = 1;
        for(int i = 1; i <= (mx + 1)/ 2; i++)
            ans = max(ans, i * (mx - i + 1));
        cout << ans << '\n';
    }
    return 0;
}