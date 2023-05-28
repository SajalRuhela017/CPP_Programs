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
        bool server = true;
        int a = 0, b = 0;
        for(int i = 0; i < n; i++)
        {
            if(s[i] == 'A' && server)
                a++;
            else if(s[i] == 'B' && !server)
                b++;
            else if(s[i] == 'A' && !server)
                server = true;
            else if(s[i] == 'B' && server)
                server = false;
        }
        cout << a << ' ' << b << '\n';
    }
    return 0;
}