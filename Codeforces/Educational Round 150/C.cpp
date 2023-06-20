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
        int n, ans = 0;
        string s;
        cin >> s;
        n = s.size();
        char c = 'A';
        int x = 0;
        while(s[x] == 'E')
            x++;
        if(x < n)
            s[x] = 'E';
        for(int i = n - 1; i >= 0; i--)
        {
            c = max(c, s[i]);
            if(c <= s[i])
            {
                switch (s[i])
                {
                    case 'A':
                        ans += 1;
                        break;

                    case 'B':
                        ans += 10;
                        break;

                    case 'C':
                        ans += 100;
                        break;

                    case 'D':
                        ans += 1000;
                        break;

                    case 'E':
                        ans += 10000;
                        break;
                    
                    default:
                        break;
                }
            }
            else
            {
                switch (s[i])
                {
                    case 'A':
                        ans -= 1;
                        break;

                    case 'B':
                        ans -= 10;
                        break;

                    case 'C':
                        ans -= 100;
                        break;

                    case 'D':
                        ans -= 1000;
                        break;

                    case 'E':
                        ans -= 10000;
                        break;
                    
                    default:
                        break;
                }
            }
        }
        cout << ans << '\n';
    }
    return 0;
}