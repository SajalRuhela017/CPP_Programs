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
        int n = s.size(), ans = INT_MAX;
        for(int i = 0; i < 26; i++)
        {
            char c = 'a' + i;
            int size = 0, mx = 0;
            for(int j = 0; j < n; j++)
            {
                if(s[j] == c)
                    size = 0;
                else
                {
                    size++;
                    mx = max(size, mx);
                }
            }
            if(mx == 0)
            {
                cout << 0 << '\n';
                goto NEXT;
            }
            if(mx != n)
            {
                int temp = log2(mx) + 1;
                ans = min(ans, temp);
            }
        }
        cout << ans << '\n';
        NEXT:;
    }
    return 0;
}